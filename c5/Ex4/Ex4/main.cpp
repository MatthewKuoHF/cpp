//
//  main.cpp
//  Ex4
//
//  Created by Matthew Kuo on 2018/5/11.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    double D=100, C=100;
    int year=1;
    for(; D>=C; year++){
        D+=10;
        C*=1.05;
    }
    cout<<"C exceeds D after "<<year<<" years"<<endl;
    cout<<"D: "<<D<<"\nC: "<<C<<endl;
    return 0;
}
