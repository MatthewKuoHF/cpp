//
//  queue.cpp
//  Customer
//
//  Created by Matthew Kuo on 2018/6/20.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include "queue.hpp"
#include <cstdlib>
#include <ctime>
Queue::Queue(int qs):qsize(qs){
    front=rear=nullptr;
    items=0;
}
Queue::~Queue(){
    Node * temp;
    while(front!=nullptr){
        temp=front;
        front=front->next;
        delete temp;
    }
}
bool Queue::isEmpty() const{
    return items==0;
}
bool Queue::isFull() const{
    return items==Q_SIZE;
}
int Queue::queueCount() const{
    return items;
}
bool Queue::enqueue(const Item & item){
    if(isFull())
        return false;
    Node * add = new Node;
    add->item=item;
    add->next=nullptr;
    items++;
    if(front==nullptr)
        front=add;
    else
        rear->next=add;
    rear=add;
    return true;
}
bool Queue::dequeue(Item & item){
    if(isEmpty())
        return false;
    items--;
    Node * temp;
    temp=front;
    front=front->next;
    delete temp;
    if(items==0)
        rear=nullptr;
    return true;
}
void Customer::set(long when){
    processtime=std::rand()%3+1;
    arrive=when;
}
