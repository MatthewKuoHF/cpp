//
//  main.cpp
//  Ex6
//
//  Created by Matthew Kuo on 2018/6/12.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include "Move.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    Move test(2.2, 3.3);
    Move ha(1, 2);
    test.showmove();
    Move lol=test.add(ha);
    lol.showmove();
}
