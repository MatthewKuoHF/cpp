//
//  main.cpp
//  Ex5
//
//  Created by Matthew Kuo on 2018/6/12.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include "stack.hpp"
#include <cctype>
using namespace std;
int main(int argc, const char * argv[]) {
    Stack st;
    Item po;
    char ch;
    cout<<"Enter A to add a customer,\n"
    <<"P to pop a customer, or Q to quit.\n";
    while(cin>>ch&&toupper(ch)!='Q'){
        while(cin.get()!='\n')
            continue;
        if(!isalpha(ch))
            continue;
        switch (ch) {
            case 'a':
            case 'A':
                cout<<"Enter the name and number to pay: ";
                cin>>po.fullname;
                cin>>po.payment;
                st.push(po);
                break;
            case 'p':
            case 'P':
                st.pop(po);
                break;
        }
        cout<<"\nEnter A to add a purchase order,\n"
        <<"P to process a PO, or Q to quit.\n";
    }
    cout<<"Bye!\n";
}
