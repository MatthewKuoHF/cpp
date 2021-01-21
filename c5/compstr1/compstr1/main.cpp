//
//  main.cpp
//  compstr1
//
//  Created by Matthew Kuo on 2018/5/13.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    char word[5] = "?ate";
    for(char ch='a'; strcmp(word, "mate"); ch++){
        word[0]=ch;
        cout<<word<<endl;
    }
    
    return 0;
}
