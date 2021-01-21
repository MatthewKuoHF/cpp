//
//  main.cpp
//  myfirst
//
//  Created by Matthew Kuo on 2018/4/16.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout<<"give me the area"<<endl;
    double area;
    cin>>area;
    double side;
    cout<<"The side of the square is ";
    side = sqrt(area);
    cout<<side<<endl;
    
    return 0;
}
