//
//  stack.cpp
//  Ex5
//
//  Created by Matthew Kuo on 2018/6/12.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include "stack.hpp"
#include <cstring>
#include <iostream>
using namespace std;
Stack::Stack(const char * f, double payment){
    running_total=0;
    top=0;
    strcpy(items[top].fullname, f);
    items[top].payment=payment;
    top+=1;
}
bool Stack::isEmpty() const{
    return top==0;
}
bool Stack::isFull() const{
    return top==MAX;
}
bool Stack::push(const Item & item){
    if(isFull()){
        cout<<"Stack is full already.\n";
        return false;
    }
    else{
        strcpy(items[top].fullname, item.fullname);
        items[top].payment=item.payment;
        top+=1;
        return true;
    }
}
bool Stack::pop(Item & item){
    if(isEmpty()){
        cout<<"Stack is empty already.\n";
        return false;
    }
    else{
        running_total+=item.payment;
        top-=1;
        cout<<"running total: "<<running_total<<endl;
        return false;
    }
}
