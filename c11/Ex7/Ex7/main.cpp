//
//  main.cpp
//  Ex7
//
//  Created by Matthew Kuo on 2018/6/17.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include "complex0.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    complex a(3.0, 4.0);
    complex c;
    cout<<"Enter a complex number (q to quit): \n";
    while(cin>>c){
        cout<<"c is"<<c<<'\n';
        cout<<"complex conjugate is "<<~c<<endl;
        cout<<"a is "<<a<<endl;
        cout<<"a+c is "<<a+c<<endl;
        cout<<"a-c is "<<a-c<<endl;
        cout<<"a*c is "<<a*c<<endl;
        cout<<"2*c is "<<2*c<<endl;
        cout<<"Enter a complex number (q to quit):\n";
    }
    cout<<"Bye!\n"<<endl;
}
