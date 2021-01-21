//
//  main.cpp
//  Ex3
//
//  Created by Matthew Kuo on 2018/6/17.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "trail.hpp"
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
        cout<<"How many trails you want to have: ";
        int tri;
        cin>>tri;
        int k=tri;
        unsigned long hi, lo, total=0;
        int s=0;
        while(tri){
            result.reset(0, 0);
            steps=0;
            while(result.magval()<target){
                dctn=rand()%360;
                step.reset(dstep, dctn, walk::POL);
                result=result+step;
                steps++;
            }
            total+=steps;
            if(s==0){
                hi=steps;
                lo=steps;
                s=1;
            }
            if(steps>hi)
                hi=steps;
            else if(steps<lo)
                lo=steps;
            tri--;
        }
        cout<<"Highest trial: "<<hi<<" steps.\n";
        cout<<"Lostest trial: "<<lo<<" steps.\n";
        cout<<"Average steps: "<<total/k<<endl;
    }
    cout<<"bye!"<<endl;
    
}
