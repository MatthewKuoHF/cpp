//
//  Cd.hpp
//  Ex1
//
//  Created by Matthew Kuo on 2018/7/5.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#ifndef Cd_hpp
#define Cd_hpp

#include <stdio.h>
class Cd{
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;
public:
    Cd(char * s1, char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    virtual ~Cd();
    virtual void Report() const;
    Cd & operator=(const Cd & d);
};
class Classic: public Cd{
private:
    char * primary;
public:
    Classic(char * p="", char * s1="", char * s2="", int n=0, double x=0);
    Classic(const Classic & c);
    ~Classic();
    void Report() const;
    Classic & operator=(const Classic & d);
};
#endif /* Cd_hpp */
