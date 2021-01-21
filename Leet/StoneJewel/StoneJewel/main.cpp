//
//  main.cpp
//  StoneJewel
//
//  Created by Matthew Kuo on 2018/4/26.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    string J = "aA";
    string S = "aAAbbbb";
    int c=0;
    for(int i = 0; i<J.size(); i++){
        for(int j = 0; j<S.size(); j++){
            if(J[i]==S[j]){
                c++;
            }
        }
    }
    cout<<c;
}
