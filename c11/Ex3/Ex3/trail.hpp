//
//  trail.hpp
//  Ex3
//
//  Created by Matthew Kuo on 2018/6/17.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#ifndef trail_hpp
#define trail_hpp

#include <stdio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
class walk{
public:
    enum form{ REC, POL};
private:
    double x, y;
    double mag, deg;
    form mode;
    void set_mag();
    void set_deg();
    void set_x();
    void set_y();
public:
    walk();
    walk(double a, double b, form f=REC);
    void reset(double a, double b, form f=REC);
    ~walk();
    double xval();
    double yval();
    double magval();
    double degval();
    void polar_mode();
    void rec_mode();
    walk operator+(const walk & w) const;
    walk operator-(const walk & w) const;
    walk operator-() const;
    walk operator*(double n) const;
    friend walk operator*(double n, const walk & w);
    friend ostream & operator<<(ostream & os, const walk & w);
};
#endif /* trail_hpp */
