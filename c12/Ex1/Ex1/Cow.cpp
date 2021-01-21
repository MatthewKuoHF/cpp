//
//  Cow.cpp
//  Ex1
//
//  Created by Matthew Kuo on 2018/6/21.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include "Cow.hpp"
#include <cstring>
#include <iostream>
using namespace std;
Cow::Cow(){
    //cout<<"default constructor\n";
    strcpy(name, "Cow");
    hobby=new char[1];
    hobby[0]='\0';
    weight=0;
    
}
Cow::Cow(const char * nm, const char * ho, double wt){
    //cout<<"full constructor\n";
    strcpy(name, nm);
    hobby=new char[strlen(ho)+1];
    strcpy(hobby, ho);
    weight=wt;
}
Cow::Cow(const Cow & c){
    //cout<<"copy constructor\n";
    strcpy(name, c.name);
    hobby=new char[strlen(c.hobby)+1];
    strcpy(hobby, c.hobby);
    weight=c.weight;
}
Cow::~Cow(){
    //cout<<"destructor\n";
    delete [] hobby;
}
Cow & Cow::operator=(const Cow & c){
    strcpy(name, c.name);
    delete hobby;
    hobby=new char[strlen(c.hobby)+1];
    strcpy(hobby, c.hobby);
    return *this;
}
void Cow::ShowCow() const{
    cout<<name<<endl;
    cout<<hobby<<endl;
    cout<<weight<<endl;
}
