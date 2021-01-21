//
//  main.cpp
//  Ex7
//
//  Created by Matthew Kuo on 2018/5/11.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
struct car{
    string make;
    int year;
};
int main(int argc, const char * argv[]) {
    int num;
    cout<<"How many cars to catalog: ";
    cin>>num;
    cin.get();
    car * cat = new car[num];
    for(int i=0; i<num; i++){
        cout<<"Car #"<<i+1<<"\ninput make: ";
        getline(cin, cat[i].make);
        cout<<"input year: ";
        cin>>cat[i].year;
        cin.get();
    }
    cout<<"Here is your collection:\n";
    for(int i=0; i<num; i++){
        cout<<cat[i].make<<" "<<cat[i].year<<endl;
    }
    return 0;
}
