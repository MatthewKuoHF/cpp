//
//  main.cpp
//  Ex1
//
//  Created by Matthew Kuo on 2018/5/4.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
struct id{
    string firstname;
    string lastname;
    char grade;
    int age;
};
using namespace std;
int main(int argc, const char * argv[]) {
    cout<<"input first name: ";
    id one;
    getline(cin, one.firstname);
    cout<<"input last name: ";
    getline(cin, one.lastname);
    cout<<"input your grade: ";
    cin>>one.grade;
    cout<<"input your age: ";
    cin>>one.age;
    
    cout<<"name: "<<one.firstname<<" "<<one.lastname<<endl;
    cout<<"grade: "<<char(one.grade+1)<<endl;
    cout<<"age: "<<one.age<<endl;
    return 0;
}
