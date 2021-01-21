//
//  main.cpp
//  Ex1
//
//  Created by Matthew Kuo on 2018/6/12.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include "BankAccount.hpp"
#include <cctype>
using namespace std;
int main(int argc, const char * argv[]) {
    string dname, anum;
    double money;
    cout<<"Please enter your name: ";
    getline(cin, dname);
    cout<<"Please enter the account number: ";
    cin>>anum;
    bankAccount ba(dname, anum, 0);
    ba.show();
    cout<<"Input D to deposit, W to withdraw, Q to quit: ";
    char a;
    while(cin>>a&&toupper(a)!='Q'){
        a=toupper(a);
        while(cin.get()!='\n')
            continue;
        if(!isalpha(a))
            continue;
        if(a=='D'){
            cout<<"Please enter the ammount of deposit: ";
            cin>>money;
            ba.deposit(money);
        }
        else if(a=='W'){
            cout<<"Please enter the ammount of withdraw: ";
            cin>>money;
            ba.withdraw(money);
        }
        else if(a=='Q'){
            cout<<"bye"<<endl;
            break;
        }
        cout<<"Input D to deposit, W to withdraw, Q to quit: ";
    }
}
