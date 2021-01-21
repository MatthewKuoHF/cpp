//
//  main.cpp
//  Ex3
//
//  Created by Matthew Kuo on 2018/5/16.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    cout<<"Please enter one of the following choices:\n"
    "c) carnivore   p) pianist\n"
    "t) tree    g) game\nf\n";
    char ch;
    while(true){
        cout<<"Please enter a c, p, t, or g: ";
        cin>>ch;
        switch(ch){
            case 'c': cout<<"Alibaba is a carnivore.\n";
                break;
            case 'p': cout<<"Chopin is a pianist.\n";
                break;
            case 't': cout<<"Maple is a tree.\n";
                break;
            case 'g': cout<<"PUBG is a game.\n";
                break;
            default: continue;
        }
    }
    
    return 0;
}
