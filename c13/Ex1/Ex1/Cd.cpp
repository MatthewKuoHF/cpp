//
//  Cd.cpp
//  Ex1
//
//  Created by Matthew Kuo on 2018/7/5.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include "Cd.hpp"
#include <cstring>
#include <iostream>
Cd::Cd(char * s1, char * s2, int n, double x): selections(n), playtime(x){
    strcpy(performers, s1);
    strcpy(label, s2);
}
Cd::Cd(const Cd & d){
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections=d.selections;
    playtime=d.playtime;
}
Cd::Cd(){
    strcpy(performers, "");
    strcpy(label, "");
    selections=0;
    playtime=0;
}
Cd::~Cd(){
}
void Cd::Report() const{
    using namespace std;
    cout<<performers<<"\n"<<label<<endl;
    cout<<"selections: "<<selections<<endl;
    cout<<"time: "<<playtime<<endl;
}
Cd & Cd::operator=(const Cd & d){
    strcpy(this->performers, d.performers);
    strcpy(this->label, d.label);
    this->selections=d.selections;
    this->playtime=d.playtime;
    return *this;
}
Classic::Classic(char * p, char * s1, char * s2, int n, double x): Cd(s1, s2, n, x){
    primary=new char[strlen(p)+1];
    strcpy(primary, p);
}
Classic::Classic(const Classic & c): Cd(c){
    strcpy(primary, c.primary);
}
void Classic::Report() const{
    Cd::Report();
    std::cout<<primary<<"\n";
}
Classic & Classic::operator=(const Classic & d){
    if(this==&d)
        return *this;
    Cd::operator=(d);
    delete [] primary;
    primary=new char[strlen(d.primary)];
    strcpy(this->primary, d.primary);
    return *this;
}
Classic::~Classic(){
    delete [] primary;
}
