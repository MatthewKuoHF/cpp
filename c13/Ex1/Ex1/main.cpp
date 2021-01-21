//
//  main.cpp
//  Ex1
//
//  Created by Matthew Kuo on 2018/7/5.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
#include "Cd.hpp"
void Bravo(const Cd & disk);
int main(int argc, const char * argv[]) {
    Cd c1("Beatles", "Capitol", 14, 35.5);
    Classic c2=Classic("Piano Sonata in B flat, Fantasia in C", "Alfred Brendel", "Philips", 2, 57.17);
    
    Cd *pcd=&c1;
    
    cout<<"Using object directly: \n";
    c1.Report();
    c2.Report();
    
    cout<<"\nUsing type cd * pointer to objects: \n";
    pcd->Report();
    pcd=&c2;
    pcd->Report();
    
    cout<<"\nCalling a function with a Cd reference argument:\n";
    Bravo(c1);
    Bravo(c2);
    
    cout<<"\nTesting assignment:\n";
    Classic copy;
    copy=c2;
    copy.Report();
}
void Bravo(const Cd & disk){
    disk.Report();
}
