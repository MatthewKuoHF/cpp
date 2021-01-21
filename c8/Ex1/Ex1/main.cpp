//
//  main.cpp
//  Ex1
//
//  Created by Matthew Kuo on 2018/6/6.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
void display(char * str);
void display(char * str, int n);
int sum=0;
int main(int argc, const char * argv[]) {
    char a[10]="Happy";
    display(a);
    cout<<endl;
    display(a,10);
    cout<<endl;
    display(a,3);
    cout<<endl;
    display(a,2);
    
}
void display(char * str){
    cout<<str<<endl;
}
void display(char * str, int n){
    sum++;
    for(int i=0; i<sum; i++)
        cout<<str<<endl;
}
