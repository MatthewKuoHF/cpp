//
//  Plorg.cpp
//  Ex7
//
//  Created by Matthew Kuo on 2018/6/12.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include "Plorg.hpp"
#include <iostream>
using namespace std;
Plorg::Plorg(const string & n, int ci){
    name=n;
    CI=ci;
}
void Plorg::change(const int & i){
    CI=i;
}
void Plorg::report(){
    cout<<"Name: "<<name<<endl;
    cout<<"CI: "<<CI<<endl;
}
