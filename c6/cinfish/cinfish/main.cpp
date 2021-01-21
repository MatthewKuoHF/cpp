//
//  main.cpp
//  cinfish
//
//  Created by Matthew Kuo on 2018/5/14.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    double fish[5];
    cout<<"Please enter the weights of your fish.\n";
    cout<<"You may enter up to 5 fish <q to quit>";
    cout<<"\nfish #1: ";
    int i=0;
    while(i<5&&cin>>fish[i]){
        if(++i<5){
            cout<<"fish #"<<i+1<<": ";
        }
    }
    double total = 0.0;
    for(int j=0; j<i; j++){
        total+=fish[j];
    }
    if(i==0){
        cout<<"no fish"<<endl;
    }
    else
        cout<<total/i<<" = average of "<<i<<" fish."<<endl;;
    return 0;
}
