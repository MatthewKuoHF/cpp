//
//  main.cpp
//  Ex1
//
//  Created by Matthew Kuo on 2018/6/16.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "walk.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    srand(time(0));
    double dctn;
    walk step;
    walk result(0.0, 0.0);
    unsigned long steps=0;
    double target;
    double dstep;
    cout<<"Enter target distance (q to quit): ";
    while(cin>>target){
        cout<<"Enter step length: ";
        cin>>dstep;
        while(result.magval()<target){
            dctn=rand()%360;
            step.reset(dstep, dctn, walk::POL);
            result=result+step;
            steps++;
        }
        cout<<"It takes "<<steps<<" steps to reach "<<target<<" m.\n\n";
        result.rec_mode();
        cout<<result;
        result.polar_mode();
        cout<<result;
        cout<<"average distance per step: "<<target/steps<<endl;
        steps=0;
        result.reset(0.0, 0.0);
        cout<<"Enter target distance (q to quit): ";
    }
    cout<<"bye!"<<endl;
    
}
