//
//  main.cpp
//  Ex5
//
//  Created by Matthew Kuo on 2018/5/4.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
struct CandyBar{
    string name;
    double weight;
    int calories;
};
int main(int argc, const char * argv[]) {
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout<<snack.name<<endl;
    cout<<snack.weight<<endl;
    cout<<snack.calories<<endl;
    return 0;
}
