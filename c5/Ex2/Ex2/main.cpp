//
//  main.cpp
//  Ex2
//
//  Created by Matthew Kuo on 2018/5/11.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    long double fact=1;
    for(int i=1; i<=100;i++){
        fact *= i;
    }
    cout<<fact<<endl;
    
    return 0;
}
