//
//  main.cpp
//  delete
//
//  Created by Matthew Kuo on 2018/5/3.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
char * getname(void);
int main(int argc, const char * argv[]) {
    char * name;
    name = getname();
    cout<<name<<" at "<<(int *) name<<endl;
    delete [] name;

    return 0;
}
char * getname(){
    char temp[80];
    cout<<"Enter your name: ";
    cin.get(temp, 80);
    char * pn = new char[strlen(temp)+1];
    strcpy(pn, temp);
    return pn;
}
