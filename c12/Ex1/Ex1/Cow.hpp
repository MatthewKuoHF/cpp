//
//  Cow.hpp
//  Ex1
//
//  Created by Matthew Kuo on 2018/6/21.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#ifndef Cow_hpp
#define Cow_hpp

class Cow{
    char name[20];
    char * hobby;
    double weight;
public:
    Cow();
    Cow(const char * nm, const char * ho, double wt);
    Cow(const Cow & c);
    ~Cow();
    Cow & operator=(const Cow & c);
    void ShowCow() const;
    
};
#endif /* Cow_hpp */
