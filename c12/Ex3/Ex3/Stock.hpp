//
//  Stock.hpp
//  Ex3
//
//  Created by Matthew Kuo on 2018/6/22.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#ifndef Stock_hpp
#define Stock_hpp

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
class Stock
{
private:
    char * company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    Stock();        // default constructor
    Stock(const char * co, long n = 0, double pr = 0.0);
    ~Stock();       // do-nothing destructor
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    //void show()const;
    const Stock & topval(const Stock & s) const;
    friend ostream & operator<<(ostream & os, const Stock & s);
};


#endif /* Stock_hpp */
