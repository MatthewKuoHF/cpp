//
//  main.cpp
//  Ex3
//
//  Created by Matthew Kuo on 2018/6/6.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
void tou(string & n);
int main(int argc, const char * argv[]) {
    string input;
    cout<<"Enter a string (q to quit ): ";
    while(getline(cin, input)){
        if(input=="q")
            break;
        else{
            tou(input);
            cout<<input<<endl;
            cout<<"Enter a string (q to quit ): ";
        }
    }
    cout<<"Bye\n";
    
}
void tou(string & n){
    for(int i=0; i<n.length(); i++)
        n[i]=toupper(n[i]);
}
