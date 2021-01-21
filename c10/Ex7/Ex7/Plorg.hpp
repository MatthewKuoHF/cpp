//
//  Plorg.hpp
//  Ex7
//
//  Created by Matthew Kuo on 2018/6/12.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#ifndef Plorg_hpp
#define Plorg_hpp

#include <stdio.h>
#include <cstring>
#include <iostream>
using namespace std;
class Plorg{
private:
    string name;
    int CI;
public:
    Plorg(const string & n="Plorga", int ci=50);
    void change(const int & i);
    void report();
};
#endif /* Plorg_hpp */
