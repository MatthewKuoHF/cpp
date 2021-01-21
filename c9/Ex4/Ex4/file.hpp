//
//  file.hpp
//  Ex4
//
//  Created by Matthew Kuo on 2018/6/10.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#ifndef file_hpp
#define file_hpp

#include <stdio.h>
namespace SALES{
    const int QUARTERS=4;
    struct Sales{
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };
    void setSales(Sales & s, const double ar[], int n=4);
    void setSales(Sales & s);
    void showSales(const Sales & s);
}
#endif /* file_hpp */
