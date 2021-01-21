//
//  main.cpp
//  timeConversion
//
//  Created by Matthew Kuo on 2018/4/25.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[])
{
    cout<<"Enter the number of seconds:";
    int sec;
    cin>>sec;
    cout<<sec<<" seconds = ";
    int days, hours, minutes;
    days = sec / 86400;
    sec = sec % 86400;
    hours = sec / 3600;
    sec = sec % 3600;
    minutes = sec / 60;
    sec = sec % 60;
    cout<<days<<" days "<<hours<<" hours "<<minutes<<" minutes and "<<sec<<" seconds\n";
    return 0;
}
