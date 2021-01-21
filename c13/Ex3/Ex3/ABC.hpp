//
//  ABC.hpp
//  Ex3
//
//  Created by Matthew Kuo on 2018/7/5.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#ifndef ABC_hpp
#define ABC_hpp

#include <stdio.h>
#include <iostream>
class baseDMA{
private:
    char * label;
    int rating;
public:
    baseDMA(const char * l="null", int r=0);
    baseDMA(const baseDMA & rs);
    virtual ~baseDMA();
    baseDMA & operator=(const baseDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);
    virtual void View();
};
class lacksDMA: public baseDMA{
private:
    enum{ COL_LEN=40};
    char color[COL_LEN];
public:
    lacksDMA(const char * c="blank", const char * l="null", int r=0);
    lacksDMA(const char * c, const baseDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const lacksDMA & rs);
    void View();
};
class hasDMA: public baseDMA{
private:
    char * style;
public:
    hasDMA(const char * s="none", const char * l="null", int r=0);
    hasDMA(const char * s, const baseDMA & rs);
    ~hasDMA();
    hasDMA & operator=(const hasDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
    void View();
};

#endif /* ABC_hpp */
