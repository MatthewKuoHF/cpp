//
//  complex0.cpp
//  Ex7
//
//  Created by Matthew Kuo on 2018/6/17.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include "complex0.hpp"
#include <iostream>
using namespace std;
complex complex::operator+(const complex & n) const{
    complex tmp(a+n.a, b+n.b);
    return tmp;
}
complex complex::operator-(const complex & n) const{
    complex tmp(a-n.a, b-n.b);
    return tmp;
}
complex complex::operator*(const complex & n) const{
    complex tmp((a*n.a-b*n.b), (a*n.b+b*n.a));
    return tmp;
}
complex complex::operator~() const{
    complex tmp(a, -b);
    return tmp;
}
complex operator*(double num, const complex & n){
    complex tmp(num*n.a, num*n.b);
    return tmp;
}
istream & operator>>(istream & is, complex & n){
    cout<<"Enter real part: ";
    is>>n.a;
    cout<<"Enter imaginary part: ";
    is>>n.b;
    return is;
}
ostream & operator<<(ostream & os, const complex & n){
    os<<'('<<n.a<<", "<<n.b<<"!)\n";
    return os;
}
