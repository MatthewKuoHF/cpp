//
//  main.cpp
//  Ex2
//
//  Created by Matthew Kuo on 2018/6/9.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include "golf.hpp"
using namespace std;
void setgolf(golf & g, const string name, int hc);
int setgolf(golf & g);
void handicap(golf & g, int hc);
void showgolf(const golf & g);
int main(int argc, const char * argv[]) {
    golf a, b;
    setgolf(a, "Matthew Kuo", 12);
    if(setgolf(b)==1)
        cout<<"Thank you"<<endl;
    else
        cout<<"Please enter valid name"<<endl;
    cout<<"a: \n";
    showgolf(a);
    cout<<endl;
    handicap(a, 8);
    cout<<"a: (change): \n";
    showgolf(a);
    cout<<"\nb: \n";
    showgolf(b);
    
}
