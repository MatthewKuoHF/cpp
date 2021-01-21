//
//  main.cpp
//  waiting
//
//  Created by Matthew Kuo on 2018/5/9.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <ctime>
using namespace std;
int main(int argc, const char * argv[]) {
    cout<<"How many seconds do you want to wait? ";
    double sec;
    cin>>sec;
    clock_t delay = sec * CLOCKS_PER_SEC;
    clock_t start = clock();
    while(clock() - start < delay)
        ;
    cout<<"done"<<endl;
    return 0;
}
