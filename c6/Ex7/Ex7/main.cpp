//
//  main.cpp
//  Ex7
//
//  Created by Matthew Kuo on 2018/5/16.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <cctype>
using namespace std;
int main(int argc, const char * argv[]) {
    string str[100];
    cout<<"Enter words (q to quit): ";
    int n=0, v=0, c=0;
    for(int i=0; i<100; i++){
        cin>>str[i];
        str[i][0]=tolower(str[i][0]);
        if(str[i]=="q")
            break;
        else{
            if(!isalpha(str[i][0]))
                n++;
            else if(str[i][0]=='a'||str[i][0]=='e'||str[i][0]=='i'||str[i][0]=='o'||str[i][0]=='u')
                v++;
            else
                c++;
        }
    }
    cout<<"Vowel: "<<v<<endl;
    cout<<"Consonants: "<<c<<endl;
    cout<<"Others: "<<n<<endl;
    
    return 0;
}
