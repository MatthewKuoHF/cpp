//
//  main.cpp
//  Ex1
//
//  Created by Matthew Kuo on 2018/5/16.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <cctype>
using namespace std;
int main(int argc, const char * argv[]) {
    char ch;
    while(cin.get(ch)&&ch!='@'){
        if(!isdigit(ch)){
            if(isupper(ch)){
                ch=tolower(ch);
            }
            else if(islower(ch))
                ch=toupper(ch);
            cout<<ch;
        }
    }
    cout<<endl;
    
    return 0;
}
