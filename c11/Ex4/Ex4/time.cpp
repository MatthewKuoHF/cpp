//
//  time.cpp
//  Ex4
//
//  Created by Matthew Kuo on 2018/6/17.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include "time.hpp"
Time::Time(){
    hours=0;
    minutes=0;
}
Time::Time(int h, int m){
    hours=h;
    minutes=m;
}
void Time::AddMin(int m){
    minutes+=m;
    hours+=minutes/60;
    minutes%=60;
}
void Time::AddHr(int h){
    hours+=h;
}
void Time::Reset(int h, int m){
    hours=h;
    minutes=m;
}
Time operator+(const Time & a, const Time & t){
    Time sum(0, 0);
    sum.minutes=a.minutes+t.minutes;
    sum.hours=a.hours+t.hours+(sum.minutes/60);
    sum.minutes%=60;
    return sum;
}
Time operator-(const Time & a, const Time & t){
    Time diff;
    int tot1, tot2;
    tot1=a.hours*60+a.minutes;
    tot2=t.hours*60+t.minutes;
    diff.minutes=(tot1-tot2)%60;
    diff.hours=(tot1-tot2)/60;
    return diff;
}
Time operator*(const Time & a, double n){
    int total;
    Time sum(0, 0);
    total=a.hours*60*n+a.minutes*n;
    sum.AddMin(total);
    return sum;
}
Time operator*(double m, const Time & t){
    return t*m;
}

std::ostream & operator<<(std::ostream & os, const Time & t){
    os<<t.hours<<":"<<t.minutes<<std::endl;
    return os;
}
