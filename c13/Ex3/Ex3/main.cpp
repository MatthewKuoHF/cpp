//
//  main.cpp
//  Ex3
//
//  Created by Matthew Kuo on 2018/7/5.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
#include "ABC.hpp"
using namespace std;
const int CLIENTS=4;
int main()
{
    baseDMA * pb[CLIENTS];
    char label[20], color[20], style[20];
    int rating;
    int kind;
    for(int i=0; i<CLIENTS; i++){
        cout<<"Enter label: ";
        cin>>label;
        cout<<"Enter rating: ";
        cin>>rating;
        cout<<"Enter 1 for lacksDMA or 2 for hasDMA: ";
        cin>>kind;
        if(kind==1){
            cout<<"Enter color: ";
            cin>>color;
            pb[i]=new lacksDMA(color, label, rating);
        }
        else{
            cout<<"Enter style: ";
            cin>>style;
            pb[i]=new hasDMA(style, label, rating);
        }
        cout<<"\n";
    }
    for(int i=0; i<CLIENTS; i++){
        pb[i]->View();
    }
    return 0;
}

