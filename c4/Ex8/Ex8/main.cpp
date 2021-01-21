//
//  main.cpp
//  Ex8
//
//  Created by Matthew Kuo on 2018/5/4.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
struct pizza{
    string name;
    int diameter;
    int weight;
};
int main(int argc, const char * argv[]) {
    pizza * one = new pizza;
    cout<<"pizza's diameter: ";
    cin>>one->diameter;
    char a;
    cin.get(a);
    cout<<"company name: ";
    getline(cin, one->name);
    cout<<"enter the weight: ";
    cin>>one->weight;
    
    cout<<endl<<one->name<<endl;
    cout<<one->diameter<<endl;
    cout<<one->weight<<endl;
    
    delete one;

    return 0;
}
