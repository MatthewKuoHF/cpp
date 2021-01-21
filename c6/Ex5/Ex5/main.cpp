//
//  main.cpp
//  Ex5
//
//  Created by Matthew Kuo on 2018/5/16.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    double money=0, tax=0;
    cin>>money;
    
    if(money<=10000)
        tax=0;
    if(money>=10000){
        tax+=10000*0.1;
    }
    if(money>=20000){
        tax+=20000*0.15;
    }
    if(money>35000){
        tax+=(money-35000)*0.2;
    }
    cout<<tax<<endl;
    return 0;
}
