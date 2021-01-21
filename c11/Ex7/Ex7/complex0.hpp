//
//  complex0.hpp
//  Ex7
//
//  Created by Matthew Kuo on 2018/6/17.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#ifndef complex0_hpp
#define complex0_hpp

#include <iostream>
using namespace std;
class complex{
public:
    double a;
    double b;
    complex(double x=0, double y=0){ a=x; b=y; }
    complex operator+(const complex & n) const;
    complex operator-(const complex & n) const;
    complex operator*(const complex & n) const;
    complex operator~() const;
    friend complex operator*(double num, const complex & n);
    friend istream & operator>>(istream & is, complex & n);
    friend ostream & operator<<(ostream & os, const complex & n);
    
};
#endif /* complex0_hpp */
