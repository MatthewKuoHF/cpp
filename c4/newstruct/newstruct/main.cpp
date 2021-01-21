//
//  main.cpp
//  newstruct
//
//  Created by Matthew Kuo on 2018/5/3.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main(int argc, const char * argv[]) {
    inflatable * ps = new inflatable;
    cout<<"Enter name of inflatable item: ";
    cin.get(ps->name, 20);
    cout<<"Enter volume in cubic feet: ";
    cin>>(*ps).volume;
    cout<<"Enter price: $";
    cin>>ps->price;
    
    cout<<"name: "<<(*ps).name<<endl;
    cout<<"volume: "<<ps->volume<<endl;
    cout<<"price: "<<(*ps).price<<endl;
    delete ps;
    return 0;
}
