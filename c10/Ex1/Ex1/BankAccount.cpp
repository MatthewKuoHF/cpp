//
//  BankAccount.cpp
//  Ex1
//
//  Created by Matthew Kuo on 2018/6/12.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include "BankAccount.hpp"
#include <iostream>
using namespace std;
bankAccount::bankAccount(const string & dname,const string & anum, double blce){
    dName=dname;
    aNum=anum;
    balance=blce;
}
void bankAccount::show(){
    cout<<"Depositor's name is: "<<dName<<endl;
    cout<<"The account number is: "<<aNum<<endl;
    cout<<"The balance is: $"<<balance<<endl;
}
void bankAccount::deposit(double mny){
    balance+=mny;
    cout<<"$"<<mny<<" has been deposited to the account.\n";
    show();
}
void bankAccount::withdraw(double mny){
    balance-=mny;
    cout<<"$"<<mny<<" has been withdrawn from the account.\n";
    show();
}
