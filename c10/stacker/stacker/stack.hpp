//
//  stack.hpp
//  stacker
//
//  Created by Matthew Kuo on 2018/6/12.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#ifndef stack_hpp
#define stack_hpp

typedef unsigned long Item;
class Stack{
private:
    enum {MAX=10};
    Item items[MAX];
    int top;
public:
    Stack();
    bool isEmpty() const;
    bool isFull() const;
    bool push(const Item & item);
    bool pop(Item & item);
};

#endif /* stack_hpp */
