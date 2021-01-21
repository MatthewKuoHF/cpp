//
//  trail.cpp
//  Ex3
//
//  Created by Matthew Kuo on 2018/6/17.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include "trail.hpp"
#include <cmath>
using namespace std;
const double Rad_to_deg=45.0/atan(1.0);
void walk::set_mag(){
    mag=sqrt(x*x+y*y);
}
void walk::set_deg(){
    if(x==0&&y==0){
        deg=0;
    }
    else
        deg=atan2(y,x);
}
void walk::set_x(){
    x=mag*cos(deg);
}
void walk::set_y(){
    y=mag*sin(deg);
}
walk::walk(){
    x=y=deg=mag=0;
    mode=REC;
}
walk::walk(double a, double b, form f){
    if(f==REC){
        x=a;
        y=b;
        set_mag();
        set_deg();
    }
    else if(f==POL){
        mag=a;
        deg=b;
        set_x();
        set_y();
    }
    else{
        cout<<"Form error\n";
        walk();
    }
}
void walk::reset(double a, double b, form f){
    if(f==REC){
        x=a;
        y=b;
        set_mag();
        set_deg();
    }
    else if(f==POL){
        mag=a;
        deg=b;
        set_x();
        set_y();
    }
    else{
        cout<<"Form error\n";
        walk();
    }
}
walk::~walk(){
    
}
double walk::xval(){
    return x;
}
double walk::yval(){
    return y;
}
double walk::magval(){
    return mag;
}
double walk::degval(){
    return deg;
}
void walk::polar_mode(){
    mode=POL;
}
void walk::rec_mode(){
    mode=REC;
}
walk walk::operator+(const walk & w) const{
    return walk(x+w.x, y+w.y);
}
walk walk::operator-(const walk & w) const{
    return walk(x-w.x, y-w.y);
}
walk walk::operator-() const{
    return walk(-x, -y);
}
walk walk::operator*(double n) const{
    return walk(x*n, y*n);
}
walk operator*(double n, const walk & w){
    return w*n;
}
ostream & operator<<(ostream & os, const walk & w){
    if(w.mode==walk::REC)
        os<<"x: "<<w.x<<" y: "<<w.y<<endl;
    else if(w.mode==walk::POL)
        os<<"mag: "<<w.mag<<" deg: "<<w.deg<<endl;
    else
        os<<"wrong mode\n"<<endl;
    return os;
}

