//
//  Portmaster.cpp
//  Ex4
//
//  Created by Matthew Kuo on 2018/7/5.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include "Portmaster.hpp"
/*private:
char * brand;
char style[20];
int bottles;
public:*/
Port::Port(const char * br, const char * st, int b): bottles(b){
    strcpy(style, st);
    brand=new char[strlen(br)+1];
    strcpy(brand, br);
}
Port::Port(const Port & p){
    *this=p;
}
Port & Port::operator=(const Port & p){
    if(this==&p)
        return *this;
    else{
        strcpy(style, p.style);
        bottles=p.bottles;
        delete [] brand;
        brand=new char[strlen(p.brand)+1];
        strcpy(brand, p.brand);
        return *this;
    }
}
Port & Port::operator+=(int b){
    bottles+=b;
    return *this;
}
Port & Port::operator-=(int b){
    bottles-=b;
    return *this;
}
void Port::Show() const{
    cout<<"Brand: "<<brand<<endl;
    cout<<"Kind: "<<style<<endl;
    cout<<"Bottles: "<<BottleCount()<<endl;
}
ostream & operator<<(ostream & os, const Port & p){
    os<<p.brand<<", "<<p.style<<", "<<p.bottles;
    return os;
}

//---------------

/*private:
char * nickname;
int year;
public:*/
VintagePort::VintagePort(): Port(){
    nickname=new char[1];
    year=0;
}
VintagePort::VintagePort(const char * br, int b, const char * nm, int y): Port(br, "Vintage", b){
    nickname=new char[strlen(nm)+1];
    strcpy(nickname, nm);
    year=y;
}
VintagePort::VintagePort(const VintagePort & vp){
    *this=vp;
}
VintagePort & VintagePort::operator=(const VintagePort & vp){
    if(this==&vp)
        return *this;
    else{
        delete [] nickname;
        nickname=new char[strlen(vp.nickname)+1];
        strcpy(nickname, vp.nickname);
        year=vp.year;
        return *this;
    }
}
void VintagePort::Show() const{
    Port::Show();
    cout<<"Nickname: "<<nickname<<endl;
    cout<<"Year: "<<year<<endl;
}
ostream & operator<<(ostream & os, const VintagePort & vp){
    os<<(const Port &) vp<<", ";
    os<<vp.nickname<<", ";
    os<<vp.year;
    return os;
}
