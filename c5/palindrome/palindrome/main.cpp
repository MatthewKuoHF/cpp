//
//  main.cpp
//  palindrome
//
//  Created by Matthew Kuo on 2018/5/4.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, const char * argv[]) {
    string s;
    cout<<"input a string: ";
    cin>>s;
    int x = s.size();
    for(int i = x-1; i>=0; i--){
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}
