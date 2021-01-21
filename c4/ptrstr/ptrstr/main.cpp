//
//  main.cpp
//  ptrstr
//
//  Created by Matthew Kuo on 2018/5/3.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, const char * argv[]) {
    char animal[20] = "bear";
    const char * bird = "wren";
    char * ps;
    
    cout<<animal<<" and "<<bird<<endl;
    cin>>animal;
    
    ps = animal;
    cout<<"ps = animal: "<<ps<<endl;
    cout<<"the address of animal: "<<&animal<<endl;
    cout<<"the * of animal: "<<(int *) animal<<endl;
    cout<<"the address of ps: "<<&ps<<endl;
    cout<<"the * of ps: "<<(int *) ps<<endl;
    
    ps = new char[strlen(animal)+1];
    strcpy(ps, animal);
    cout<<"after unsing strcpy(): \n";
    cout<<animal<<" at "<<(int *) animal<<endl;
    cout<<ps<<" at "<<(int *)ps<<endl;
    delete [] ps;
    return 0;
}
