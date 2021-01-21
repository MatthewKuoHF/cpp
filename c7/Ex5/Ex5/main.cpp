//
//  main.cpp
//  Ex5
//
//  Created by Matthew Kuo on 2018/6/3.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
unsigned int factorial(int a);
int main(int argc, const char * argv[]) {
    cout<<"Enter a number: ";
    unsigned int n;
    while(cin>>n){
        cout<<"The factorial of "<<n<<" is "<<factorial(n)<<endl;
    }
    cout<<"Done!"<<endl;
}
unsigned int factorial(int n){
    unsigned int sum=1;
    while(n>=1){
        sum*=n;
        n--;
    }
    return sum;
}
