//
//  main.cpp
//  Ex5
//
//  Created by Matthew Kuo on 2018/6/6.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
template<typename T>
T max5(T a[5]);
int main(int argc, const char * argv[]) {
    int a[5]={12, 14, 253, 242, 342};
    double b[5]={78.4, 23.3, 54.3, 35.77, 45.3};
    cout<<max5(a)<<endl;
    cout<<max5(b)<<endl;

}
template<typename T>
T max5(T a[5]){
    T temp=a[0];
    for(int i=0; i<5; i++)
        if(temp<a[i])
            temp=a[i];
    return temp;
}
