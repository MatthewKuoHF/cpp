//
//  main.cpp
//  Ex2
//
//  Created by Matthew Kuo on 2018/6/3.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
void display(int * n, int i);
double cal_ave(int * n, int i);
int main(int argc, const char * argv[]) {
    int score[10];
    int i=0;
    cout<<"Enter score #1 (negative to quit): ";
    while(cin>>score[i]){
        if(score[i]<0||i>=10)
            break;
        else{
            i++;
            cout<<"Enter score #"<<i+1<<" (negative to quit): ";
        }
    }
    display(score, i);
    cout<<"Average score: "<<cal_ave(score, i)<<endl;
    
}
void display(int * n, int i){
    for(int a=0; a<i; a++){
        cout<<n[a]<<" ";
    }
    cout<<endl;
}
double cal_ave(int * n, int i){
    double sum=0;
    for(int a=0; a<i; a++){
        sum+=n[a];
    }
    return sum/i;
}
