//
//  Stack.cpp
//  Ex4
//
//  Created by Matthew Kuo on 2018/6/22.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include "Stack.hpp"
#include <iostream>
Stack::Stack(int n){
    pitems=new Item[n+1];
    size=n;
    top=0;
}
Stack::Stack(const Stack & st){
    pitems=new Item[st.size+1];
    for(int i=0; i<size; i++)
        pitems[i]=st.pitems[i];
    size=st.size;
    top=st.top;
}
Stack::~Stack(){
    delete [] pitems;
}
bool Stack::isEmpty()const{
    return top==0;
}
bool Stack::isFull()const{
    return top==size;
}
bool Stack::push(const Item & item){
    if(isFull())
        return false;
    else{
        pitems[top]=item;
        top+=1;
        return true;
    }
    
}
bool Stack::pop(Item & item){
    if(isEmpty())
        return false;
    else{
        item=pitems[top];
        top-=1;
        return true;
    }
}
Stack & Stack::operator=(const Stack & st){
    if(this==&st)
        return *this;
    else{
        Item * temp=pitems;
        delete [] temp;
        pitems=new Item[st.size+1];
        for(int i=0; i<size; i++)
            pitems[i]=st.pitems[i];
        size=st.size;
        top=st.top;
        return *this;
    }
}
void Stack::show()const{
    for(int i=0; i<top; i++)
        std::cout<<pitems[i]<<" ";
    std::cout<<std::endl;
}

/*
 enum {MAX=10};
 Item * pitems;
 int size;
 int top;
 */
