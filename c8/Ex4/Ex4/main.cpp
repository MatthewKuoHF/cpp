//
//  main.cpp
//  Ex4
//
//  Created by Matthew Kuo on 2018/6/6.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
struct stringy{
    char * str;
    int ct;
};
void set(stringy & n, char arr[]);
void show(const stringy & n, int i=1);
void show(const char * n, int i=1);

int main(int argc, const char * argv[]) {
    stringy beany;
    char testing[]="Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    cout<<endl;
    show(beany, 2);
    cout<<endl;
    testing[0]='D';
    testing[1]='u';
    show(testing);
    cout<<endl;
    show(testing, 3);
    cout<<endl;
    show("done!");
}
void set(stringy & n, char arr[]){
    char * pa = arr;
    n.str=pa;
    n.ct=strlen(n.str);
}
void show(const stringy & n, int i){
    for(int a=0; a<i; a++)
        cout<<n.str<<endl;
}
void show(const char * n, int i){
    for(int a=0; a<i; a++)
        cout<<n<<endl;
}
