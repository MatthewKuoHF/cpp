//
//  time.hpp
//  Ex4
//
//  Created by Matthew Kuo on 2018/6/17.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#ifndef time_hpp
#define time_hpp

#include <stdio.h>
#include <iostream>
class Time{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m=0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h=0, int m=0);
    friend Time operator+(const Time & a, const Time & t);
    friend Time operator-(const Time & a, const Time & t);
    friend Time operator*(const Time & a, double n);
    friend Time operator*(double m, const Time & t);
    friend std::ostream & operator<<(std::ostream & os, const Time & t);
};
#endif /* time_hpp */
