//
//  main.cpp
//  Ex2
//
//  Created by Matthew Kuo on 2018/6/6.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
struct CandyBar{
    char * name;
    double weight;
    int calories;
};
void set(CandyBar & n, char * nm="Millennium Munch", double w=2.85, int c=350);
void display(CandyBar & n);

int main(int argc, const char * argv[]) {
    CandyBar a, b;
    set(a);
    cout<<"a:\n";
    display(a);
    cout<<endl;
    set(b, "Happy");
    cout<<"b:\n";
    display(b);
}
void set(CandyBar & n, char * nm, double w, int c){
    n.name=nm;
    n.weight=w;
    n.calories=c;
}
void display(CandyBar & n){
    cout<<n.name<<endl;
    cout<<n.weight<<endl;
    cout<<n.calories<<endl;
}
