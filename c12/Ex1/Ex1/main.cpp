//
//  main.cpp
//  Ex1
//
//  Created by Matthew Kuo on 2018/6/21.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include "Cow.hpp"
int main(int argc, const char * argv[]) {
    Cow a("Matthew", "Volleyball", 81);
    a.ShowCow();
    Cow b=a;
    b.ShowCow();
    Cow c("T", "sleep", 50);
    b=c;
    b.ShowCow();
}
