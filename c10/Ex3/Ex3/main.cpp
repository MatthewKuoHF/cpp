//
//  main.cpp
//  Ex3
//
//  Created by Matthew Kuo on 2018/6/12.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include "golf.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    golf a, b;
    a.setgolf("Matthew Kuo", 12);
    cout<<"a: \n";
    a.showgolf();
    cout<<endl;
    a.Fhandicap(8);
    cout<<"a: (change): \n";
    a.showgolf();
    cout<<"\nb: \n";
    b.showgolf();
    
}
