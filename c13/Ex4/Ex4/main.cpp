//
//  main.cpp
//  Ex4
//
//  Created by Matthew Kuo on 2018/7/5.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include "Portmaster.hpp"
int main(int argc, const char * argv[]) {
    Port a("Nike", "Sports", 25);
    VintagePort b("Addidas", 15, "Ada", 2016);
    a.Show();
    b.Show();
    
    a+=3;
    b-=3;
    
    cout<<endl;
    cout<<a<<endl;
    cout<<endl<<b<<endl;
}
