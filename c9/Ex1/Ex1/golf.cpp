//
//  golf.cpp
//  Ex1
//
//  Created by Matthew Kuo on 2018/6/9.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include "golf.hpp"
#include <iostream>
#include <cstring>
using namespace std;
/*void setgolf(golf & g, const char * name, int hc);
int setgolf(golf & g);
void handicap(golf & g, int hc);
void showgolf(const golf & g);
*/
void setgolf(golf & g, const string name, int hc){
    g.fullname=name;
    g.handicap=hc;
}
int setgolf(golf & g){
    cout<<"Enter the name: ";
    getline(cin, g.fullname);
    cout<<"Enter handicap: ";
    cin>>g.handicap;
    if(g.fullname=="\n")
        return 1;
    else
        return 0;
}
void handicap(golf & g, int hc){
    g.handicap=hc;
}
void showgolf(const golf & g){
    cout<<"Name: "<<g.fullname<<endl;
    cout<<"Handicap: "<<g.handicap<<endl;
}
