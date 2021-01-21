//
//  main.cpp
//  Ex6
//
//  Created by Matthew Kuo on 2018/5/16.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
struct contributor{
    string name;
    double contribution;
};
void create();
int main(int argc, const char * argv[]) {
    cout<<"How many contributors? ";
    int n, gptrack=0, gpn[100], ptrack=0, pn[100];
    cin>>n;
    contributor * con = new contributor[n];
    for(int i=0; i<n; i++){
        cin.get();
        cout<<i+1<<")"<<"\nThe name of the "<<"contributor: ";
        getline(cin, con[i].name);
        cout<<"The amount of money contributed: ";
        cin>>con[i].contribution;
        if(con[i].contribution>=10000){
            gpn[gptrack]=i;
            gptrack++;
        }
        else{
            pn[ptrack]=i;
            ptrack++;
        }
        cout<<endl;
    }
    if(gptrack==0)
        cout<<"None\n";
    else{
        cout<<"Grand Patrons: \n";
        for(int i=0; i<gptrack; i++){
            int num = gpn[i];
            cout<<con[num].name<<endl;
            cout<<con[num].contribution<<endl;
        }
    }
    cout<<endl;
    if(ptrack==0)
        cout<<"None\n";
    else{
        cout<<"Patrons: \n";
        for(int i=0; i<ptrack; i++){
            int num = pn[i];
            cout<<con[num].name<<endl;
            cout<<con[num].contribution<<endl;
        }
    }
    delete [] con;
    return 0;
}

