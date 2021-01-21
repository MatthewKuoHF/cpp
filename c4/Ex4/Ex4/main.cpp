//
//  main.cpp
//  Ex4
//
//  Created by Matthew Kuo on 2018/5/4.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    char fn[20], ln[20];
    cout<<"first name: ";
    cin.get(fn, 20).get();
    cout<<"last name: ";
    cin.get(ln, 20).get();
    char fulln[40]={};
    strcat(fulln, ln);
    strcat(fulln, ", ");
    strcat(fulln, fn);
    cout<<fulln<<endl;
    return 0;
}
