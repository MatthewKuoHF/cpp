//
//  main.cpp
//  limits
//
//  Created by Matthew Kuo on 2018/4/22.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int nInt = INT_MAX;
    short nShort = SHRT_MAX;
    long nLong = LONG_MAX;
    long long nLLong = LLONG_MAX;
    
    cout<<"int is "<<sizeof(int)<<"bytes\n";
    cout<<"short is "<<sizeof nShort<<"bytes\n";
    cout<<"long is "<<sizeof nLong<<"bytes\n";
    cout<<"long long is "<<sizeof nLLong<<"bytes\n";
    
    cout<<"Maximum values: \n";
    cout<<"int: "<<nInt<<endl;
    cout<<"short: "<<nShort<<endl;
    cout<<"long: "<<nLong<<endl;
    cout<<"long long: "<<nLLong<<endl;
    
    cout<<"Minimum int valueL "<<INT_MIN<<endl;
    cout<<"Bits per byte = "<<CHAR_BIT<<endl;
    return 0;
}
