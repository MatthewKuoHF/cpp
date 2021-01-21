//
//  stack.cpp
//  stacker
//
//  Created by Matthew Kuo on 2018/6/12.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include "stack.hpp"
#include <iostream>
using namespace std;
Stack::Stack(){
    top=0;
}
bool Stack::isEmpty() const{
    return top==0;
}
bool Stack::isFull() const{
    return top==MAX;
}
bool Stack::push(const Item & item){
    if(top==MAX){
        cout<<"Stack is already full.\n";
        return false;
    }
    else{
        items[top++]=item;
        cout<<item<<" added"<<endl;
        return true;
    }
}
bool Stack::pop(Item & item){
    if(top==0){
        cout<<"Stack is already empty.\n";
        return false;
    }
    else{
        cout<<items[top-1]<<" is popped.\n";
        item=items[--top];
        return true;
    }
}
