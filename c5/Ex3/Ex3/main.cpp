//
//  main.cpp
//  Ex3
//
//  Created by Matthew Kuo on 2018/5/11.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int sum=0, input;
    do{
        cin>>input;
        sum+=input;
        cout<<"sum: "<<sum<<endl;
    }while(input!=0);
    return 0;
}
