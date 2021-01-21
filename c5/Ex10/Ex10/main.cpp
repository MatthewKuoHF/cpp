//
//  main.cpp
//  Ex10
//
//  Created by Matthew Kuo on 2018/5/11.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    cout<<"Enter number of rows: ";
    int num, dot, ast=1;
    cin>>num;
    for(int i=0; i<num; i++){
        dot=num-ast;
        for(int j=0; j<dot; j++)
            cout<<".";
        for(int c=0; c<ast; c++)
            cout<<"*";
        cout<<endl;
        ast++;
    }
    
    return 0;
}
