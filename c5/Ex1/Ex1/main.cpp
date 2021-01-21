//
//  main.cpp
//  Ex1
//
//  Created by Matthew Kuo on 2018/5/11.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int low, high;
    cout<<"input low: ";
    cin>>low;
    cout<<"input high: ";
    cin>>high;
    int sum=0;
    for(int i=low; i<=high;i++){
        sum+=i;
    }
    cout<<"the sum is: "<<sum<<endl;
    
    return 0;
}
