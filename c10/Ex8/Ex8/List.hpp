//
//  List.hpp
//  Ex8
//
//  Created by Matthew Kuo on 2018/6/12.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <stdio.h>
typedef int T;
class List{
private:
    int index;
    T * arr;
    int max;
public:
    List(int n=1);
    void empty();
    void add(T n);
    bool isEmpty();
    bool isFull();
    void visit(T n);
    void show();
};

#endif /* List_hpp */
