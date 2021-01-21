//
//  main.cpp
//  Ex2
//
//  Created by Matthew Kuo on 2018/5/16.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <cctype>
using namespace std;
int main(int argc, const char * argv[]) {
    double don[10];
    double sum=0;
    int ppl=0;
    for(int i=0; i<10; i++){
        if(cin>>don[i]){
            sum+=don[i];
            ppl++;
        }
    }
    cout<<"sum: "<<sum<<endl;
    int more=0;
    double ave = sum/ppl;
    for(int i=0; i<ppl; i++)
        if(don[i]>ave)
            more++;
    
    cout<<"There are "<<ppl<<" donators\n";
    cout<<"The average $ is "<<ave<<endl;
    cout<<"There are "<<more<<" people donated more than average\n";
    

    return 0;
}
