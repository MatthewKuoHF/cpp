//
//  golf.cpp
//  Ex3
//
//  Created by Matthew Kuo on 2018/6/12.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include "golf.hpp"
#include <iostream>
using namespace std;

void golf::setgolf(const string & name, int hc){
    this->fullname=name;
    (*this).handicap=hc;
}
golf::golf(){
    fullname="";
    handicap=0;
}
void golf::Fhandicap(int hc){
    this->handicap=hc;
}
void golf::showgolf(){
    cout<<"Name: "<<fullname<<endl;
    cout<<"Handicap: "<<handicap<<endl;
}
