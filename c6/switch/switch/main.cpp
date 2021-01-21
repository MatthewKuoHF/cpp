//
//  main.cpp
//  switch
//
//  Created by Matthew Kuo on 2018/5/14.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
void showMenu();
void report();
void comfort();
int main(int argc, const char * argv[]) {
    showMenu();
    int num;
    cin>>num;
    while(num!=5){
        switch(num){
            case 1: cout<<"\a\n";
                    break;
            case 2: report();
                    break;
            case 3: cout<<"The boss was in all day\n";
                    break;
            case 4: comfort();
                    break;
            default: cout<<"That's not a choice\n";
        }
        showMenu();
        cin>>num;
    }

    return 0;
}
void showMenu(){
    cout<<"Please enter 1, 2, 3, 4, or 5: \n"
    "1) alarm   2) report\n3) alibi  4) comfort\n"
    "5) quit\n";
}
void report(){
    cout<<"It's been an excellent week for business.\n"
    "Sales are up 120%. Expenses are down 35%.\n";
}
void comfort(){
    cout<<"you are good love you\n";
}
