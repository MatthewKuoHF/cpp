//
//  ABC.cpp
//  Ex3
//
//  Created by Matthew Kuo on 2018/7/5.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include "ABC.hpp"
#include <cstring>
baseDMA::baseDMA(const char * l, int r): rating(r){
    label=new char[strlen(l)+1];
    strcpy(label, l);
}
baseDMA::baseDMA(const baseDMA & rs){
    *this=rs;
}
baseDMA::~baseDMA(){
    delete [] label;
}
baseDMA & baseDMA::operator=(const baseDMA & rs){
    if(this==&rs)
        return *this;
    delete [] label;
    label=new char[strlen(rs.label)+1];
    strcpy(label, rs.label);
    rating=rs.rating;
    return *this;
}
std::ostream & operator<<(std::ostream & os, const baseDMA & rs){
    os<<"label: "<<rs.label<<std::endl;
    os<<"rating: "<<rs.rating<<std::endl;
    return os;
}

lacksDMA::lacksDMA(const char * c, const char * l, int r): baseDMA(l, r){
    strcpy(color, c);
}
lacksDMA::lacksDMA(const char * c, const baseDMA & rs):baseDMA(rs){
    strcpy(color, c);
}
std::ostream & operator<<(std::ostream & os, const lacksDMA & rs){
    os<<(const baseDMA &)rs;
    os<<"color: "<<rs.color<<"\n";
    return os;
}

hasDMA::hasDMA(const char * s, const char * l, int r): baseDMA(l, r){
    style=new char[strlen(s)+1];
    strcpy(style, s);
}
hasDMA::hasDMA(const char * s, const baseDMA & rs): baseDMA(rs){
    style=new char[strlen(s)+1];
    strcpy(style, s);
}
hasDMA::~hasDMA(){
    delete [] style;
}
hasDMA & hasDMA::operator=(const hasDMA & rs){
    if(this==&rs)
        return *this;
    baseDMA::operator=(rs);
    delete [] style;
    style=new char[strlen(rs.style)+1];
    strcpy(style, rs.style);
    return *this;
}
std::ostream & operator<<(std::ostream & os, const hasDMA & rs){
    os<<(const baseDMA &)rs;
    os<<rs.style<<std::endl;
    return os;
}

void baseDMA::View(){
    std::cout<<*this;
}
void lacksDMA::View(){
    std::cout<<*this;
}
void hasDMA::View(){
    std::cout<<*this;
}

