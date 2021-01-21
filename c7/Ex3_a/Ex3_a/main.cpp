//
//  main.cpp
//  Ex3_a
//
//  Created by Matthew Kuo on 2018/6/3.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
struct box{
    string maker;
    float height;
    float width;
    float length;
    float volume;
};
void display(box);
int main(int argc, const char * argv[]) {
    box temp;
    temp.height=temp.width=temp.length=15;
    temp.volume=temp.width*temp.height*temp.length;
    temp.maker="Bose";
    display(temp);
    
}
void display(box a){
    cout<<a.maker<<"\n"<<a.height<<"\n"<<a.width<<"\n"<<a.volume<<"\n";
}
