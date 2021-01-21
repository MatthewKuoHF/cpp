//
//  main.cpp
//  Ex3
//
//  Created by Matthew Kuo on 2018/6/9.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
char buffer[100];
struct chaff{
    char dross[20];
    int slag;
};
int main(int argc, const char * argv[]) {
    chaff * a=new (buffer) chaff[2];
    cout<<*buffer<<endl;
    cout<<&a[0]<<endl;
    strcpy(a[0].dross, "first");
    strcpy(a[1].dross, "second");
    for(int i=0; i<2; i++){
        cout<<a[i].dross<<endl;
    }
}
