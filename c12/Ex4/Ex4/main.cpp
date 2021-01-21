//
//  main.cpp
//  Ex4
//
//  Created by Matthew Kuo on 2018/6/22.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <cctype>  // or ctype.h
#include "Stack.hpp"
int main()
{
    using namespace std;
    Stack a(3);
    a.push(0);
    a.push(1);
    a.push(2);
    a.show();
    Stack b;
    b=a;
    b.show();
    return 0;
}

