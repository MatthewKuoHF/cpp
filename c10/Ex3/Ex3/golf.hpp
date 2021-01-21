//
//  golf.hpp
//  Ex3
//
//  Created by Matthew Kuo on 2018/6/12.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#ifndef golf_hpp
#define golf_hpp
#include <stdio.h>
#include <cstring>
#include <iostream>
using namespace std;
const int Len = 40;
class golf{
private:
    string fullname;
    int handicap;
public:
    golf();
    void setgolf(const string & name, int hc);
    void Fhandicap(int hc);
    void showgolf();
};

#endif /* golf_hpp */
