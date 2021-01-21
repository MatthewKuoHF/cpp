//
//  main.cpp
//  inchToFeetInch
//
//  Created by Matthew Kuo on 2018/4/25.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
const int inchOfFeet=12;
using namespace std;
int main()
{
    int inch;
    cout<<"Please tell me your height in inches:";
    cin>>inch;
    cout<<"You are "<<inch/inchOfFeet<<" feets and "<<inch%inchOfFeet<<" inches\n";
    return 0;
}
