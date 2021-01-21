//
//  main.cpp
//  pointer-practice
//
//  Created by Matthew Kuo on 2018/5/1.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int * ps = new int;
    *ps = 3;
    cout<<"ps: "<<ps<<endl;
    cout<<"&ps: "<<&ps<<endl;
    cout<<"*ps: "<<*ps<<endl;
    
    int inta[10];
    cout<<"inta: "<<inta<<endl;
    cout<<"&inta: "<<&inta<<endl;
    delete ps;
    return 0;
}
