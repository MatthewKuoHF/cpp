//
//  stack.hpp
//  Ex5
//
//  Created by Matthew Kuo on 2018/6/12.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#ifndef stack_hpp
#define stack_hpp

#include <stdio.h>
struct customer{
    char fullname[35];
    double payment;
};
typedef customer Item;
class Stack{
private:
    enum {MAX=10};
    Item items[MAX];
    int top;
    double running_total;
public:
    Stack(const char * f=" ", double payment=0);
    bool isEmpty() const;
    bool isFull() const;
    bool push(const Item & item);
    bool pop(Item & item);
};
#endif /* stack_hpp */
