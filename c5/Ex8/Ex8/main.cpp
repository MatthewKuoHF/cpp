//
//  main.cpp
//  Ex8
//
//  Created by Matthew Kuo on 2018/5/11.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    string input;
    int count=0;
    do{
        cin>>input;
        count++;
    }while(input!="done");
    count-=1;
    cout<<"You enter a total of "<<count<<" words\n";
    return 0;
}
