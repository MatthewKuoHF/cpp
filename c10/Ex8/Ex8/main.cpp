//
//  main.cpp
//  Ex8
//
//  Created by Matthew Kuo on 2018/6/12.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include "List.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    List a(5);
    a.add(3);
    a.add(4);
    a.add(5);
    a.add(6);
    a.show();
    a.visit(2);
}
