//
//  main.cpp
//  fun_ptr
//
//  Created by Matthew Kuo on 2018/6/2.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
double betsy(int);
double pam(int);
void estimate(int lines, double (*pf)(int));
int main(int argc, const char * argv[]) {
    int code;
    cout<<"How many lines of code do you need? ";
    cin>>code;
    cout<<"Here's Betsy's estimate:\n";
    estimate(code, betsy);
    cout<<"Here's Pam's estimate:\n";
    estimate(code, pam);
}
double betsy(int line){
    return line*0.05;
}
double pam(int line){
    return 0.03*line+0.0004*line*line;
}
void estimate(int lines, double (*pf)(int)){
    cout<<lines<<" lines will take ";
    cout<<(*pf)(lines)<<" hour(s)\n";
}
