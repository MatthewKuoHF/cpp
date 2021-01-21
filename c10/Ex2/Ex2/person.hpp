//
//  person.hpp
//  Ex2
//
//  Created by Matthew Kuo on 2018/6/12.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#ifndef person_hpp
#define person_hpp

#include <iostream>
using namespace std;
class Person{
private:
    static const int LIMIT=25;
    string lname;
    char fname[LIMIT];
public:
    Person(){lname="", fname[0]='\0';}
    Person(const string & ln, const char * fn="Heyyou");
    void Show() const;
    void FormalShow() const;
};
#endif /* person_hpp */
