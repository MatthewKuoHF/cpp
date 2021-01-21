//
//  person.cpp
//  Ex2
//
//  Created by Matthew Kuo on 2018/6/12.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include "person.hpp"
#include <iostream>
#include <cstring>
using namespace std;
Person::Person(const string & ln, const char * fn){
    lname=ln;
    strcpy(fname, fn);
}
void Person::Show() const{
    cout<<fname<<" "<<lname<<endl;
}
void Person::FormalShow() const{
    cout<<lname<<", "<<fname<<endl;
}
