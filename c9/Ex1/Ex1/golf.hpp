//
//  golf.hpp
//  Ex1
//
//  Created by Matthew Kuo on 2018/6/9.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#ifndef golf_hpp
#define golf_hpp

#include <stdio.h>
#include <cstring>
#include <iostream>
using namespace std;
const int Len = 40;
struct golf{
    string fullname;
    int handicap;
};
void setgolf(golf & g, const string name, int hc);
int setgolf(golf & g);
void handicap(golf & g, int hc);
void showgolf(const golf & g);

#endif /* golf_hpp */

