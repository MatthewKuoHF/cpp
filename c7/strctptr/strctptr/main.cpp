//
//  main.cpp
//  strctptr
//
//  Created by Matthew Kuo on 2018/5/29.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <cmath>
struct polar{
    double distance;
    double angle;
};
struct rect{
    double x;
    double y;
};
void rect_to_polar(const rect * pxy, polar * pda);
void show_polar(const polar * pda);
using namespace std;
int main(int argc, const char * argv[]) {
    rect * rplace = new rect;
    polar * pplace = new polar;
    
    cout<<"Enter the x and y values: ";
    while(cin>>rplace->x>>rplace->y){
        rect_to_polar(rplace, pplace);
        show_polar(pplace);
        cout<<"Next two numbers: ";
    }
    cout<<"Done!\n";
    delete rplace;
    delete pplace;
}
void rect_to_polar(const rect * pxy, polar * pda){
    pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
}
void show_polar(const polar * pda){
    const double Rad_to_deg = 57.29577951;
    cout<<"distance = "<<pda->distance;
    cout<<", angle = "<<pda->angle * Rad_to_deg<<" degree\n";
}
