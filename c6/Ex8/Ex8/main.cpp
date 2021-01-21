//
//  main.cpp
//  Ex8
//
//  Created by Matthew Kuo on 2018/5/16.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//
//A failed program!

#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, const char * argv[]) {
    ifstream fin;
    fin.open("word.txt");
    char ch;
    int n=0;
    fin>>ch;
    cout<<ch;
    while(fin>>ch){
        n++;
        //cout<<ch;
    }
    fin.close();
    return 0;
}
