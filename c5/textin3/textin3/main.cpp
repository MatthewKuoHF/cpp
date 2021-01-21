//
//  main.cpp
//  textin3
//
//  Created by Matthew Kuo on 2018/5/10.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    char ch;
    int count = 0;
    cin.get(ch);
    while(cin.fail() != true){
        cout<<ch;
        count ++;
        cin.get(ch);
    }
    cout<<endl<<count<<" characters read\n";
    
    return 0;
}
