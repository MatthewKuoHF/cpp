//
//  List.cpp
//  Ex8
//
//  Created by Matthew Kuo on 2018/6/12.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include "List.hpp"
#include <iostream>
using namespace std;
List::List(int n){
    index=0;
    arr=new T[n];
    max=n;
    for(int i=0; i<n; i++)
        arr[i]=0;
    arr[n]='\0';
}
void List::empty(){
    for(int i=0; i<index; i++)
        arr[i]=0;
    index=0;
}
void List::add(T n){
    arr[index++]=n;
}
bool List::isEmpty(){
    return index==0;
}
bool List::isFull(){
    return index==max;
}
void List::show(){
    for(int i=0; i<index; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void List::visit(T n){
    cout<<arr[n-1]<<endl;
}
