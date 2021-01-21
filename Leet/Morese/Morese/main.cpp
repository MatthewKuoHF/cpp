//
//  main.cpp
//  Morese
//
//  Created by Matthew Kuo on 2018/4/26.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    string words[] = {"gin", "zen", "gig", "msg"};
    string mores[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int size = sizeof(words) / sizeof(*words);
    for(int i=0; i<size; i++){
        int sizeString = words[i].size();
        for(j=0; j<sizeString; j++){
            string mor;
            mor = int(words[i][j])
        }
    }
}
