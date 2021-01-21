//
//  queue.hpp
//  Customer
//
//  Created by Matthew Kuo on 2018/6/20.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#ifndef queue_hpp
#define queue_hpp

class Customer{
private:
    long arrive;
    int processtime;
public:
    Customer(){ arrive=processtime=0; }
    void set(long when);
    long when() const { return arrive; }
    int ptime() const { return processtime; }
};

typedef Customer Item;
class Queue{
private:
    struct Node{
        Item item;
        Node * next;
    };
    enum { Q_SIZE=10 };
    Node * front;
    Node * rear;
    int items;
    const int qsize;
    Queue(const Queue & q):qsize(0){};
    Queue & operator=(const Queue & q){ return *this; }
public:
    Queue(int qs=Q_SIZE);
    ~Queue();
    bool isEmpty() const;
    bool isFull() const;
    int queueCount() const;
    bool enqueue(const Item & item);
    bool dequeue(Item & item);
};

#endif /* queue_hpp */
