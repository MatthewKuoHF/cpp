//
//  Stack.hpp
//  Ex4
//
//  Created by Matthew Kuo on 2018/6/22.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
typedef unsigned long Item;
class Stack{
private:
    enum {MAX=10};
    Item * pitems;
    int size;
    int top;
public:
    Stack(int n=MAX);
    Stack(const Stack & st);
    ~Stack();
    bool isEmpty()const;
    bool isFull()const;
    bool push(const Item & item);
    bool pop(Item & item);
    Stack & operator=(const Stack & st);
    void show()const;
};
#endif /* Stack_hpp */
