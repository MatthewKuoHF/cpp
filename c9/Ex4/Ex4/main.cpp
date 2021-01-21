//
//  main.cpp
//  Ex4
//
//  Created by Matthew Kuo on 2018/6/10.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include "file.hpp"
using namespace std;
void setSales(SALES::Sales & s, const double ar[], int n=4);
void setSales(SALES::Sales & s);
void showSales(const SALES::Sales & s);
int main(int argc, const char * argv[]) {
    using SALES::Sales;
    Sales a, b;
    double aa[4]={0.3, 14.2, 20.0, 12.4}, ab[4]={12.2, 13.4, 34.3, 12.9};
    SALES::setSales(a, aa);
    SALES::setSales(b, ab);
    SALES::showSales(a);
    SALES::showSales(b);
}

