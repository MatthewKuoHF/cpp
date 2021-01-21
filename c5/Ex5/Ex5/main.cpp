//
//  main.cpp
//  Ex5
//
//  Created by Matthew Kuo on 2018/5/11.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    string month[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int book[3][12], sum[3]={0};
    for(int i=0; i<3; i++){
        for(int j=0; j<12; j++){
            cout<<"year "<<i+1<<" "<<month[j]<<": ";
            cin>>book[i][j];
            sum[i]+=book[i][j];
        }
    }
    for(int i=0; i<3;i++){
        cout<<"year "<<i+1<<" total sales: "<<sum[i]<<endl;
    }
    return 0;
}
