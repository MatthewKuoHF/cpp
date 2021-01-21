//
//  main.cpp
//  Ex2
//
//  Created by Matthew Kuo on 2018/6/12.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include "person.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    Person one;
    Person two("Dimwiddy", "Sam");
    two.Show();
    cout<<endl;
    two.FormalShow();
}
