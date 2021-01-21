//
//  main.cpp
//  Ex1
//
//  Created by Matthew Kuo on 2018/6/3.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
double harmonic_mean(int a, int b);
int main(int argc, const char * argv[]) {
    int a, b;
    while(cin>>a>>b){
        if(a==0||b==0)
            break;
        else{
            cout<<harmonic_mean(a, b)<<endl;
        }
    }
    cout<<"Done!\n";
}
double harmonic_mean(int a, int b){
    return 2.0*a*b/(a+b);
}
