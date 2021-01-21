//
//  BankAccount.hpp
//  Ex1
//
//  Created by Matthew Kuo on 2018/6/12.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#ifndef BankAccount_hpp
#define BankAccount_hpp

#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;
class bankAccount{
private:
    string dName;
    string aNum;
    double balance;
public:
    bankAccount(const string & dname="default", const string & anum="default", double blce=0);
    void show();
    void deposit(double mny);
    void withdraw(double mny);
};

#endif /* BankAccount_hpp */
