//
//  main.cpp
//  outfile
//
//  Created by Matthew Kuo on 2018/5/14.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, const char * argv[]) {
    string automobile;
    int year;
    double a_price;
    double d_price;
    
    ofstream fout;
    fout.open("carinfo.txt");
    
    cout<<"Enter the make and model of automobile: ";
    getline(cin, automobile);
    cout<<"Enter the model year: ";
    cin>>year;
    cout<<"Enter the original asking price: ";
    cin>>a_price;
    d_price=0.913*a_price;
    
    cout<<fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout<<"Make and model: "<<automobile<<endl;
    cout<<"Year: "<<year<<endl;
    cout<<"Was asking $"<<a_price<<endl;
    cout<<"Now asking $"<<d_price<<endl;
    
    fout<<fixed;
    fout.precision(2);
    fout.setf(ios_base::showpoint);
    fout<<"Make and model: "<<automobile<<endl;
    fout<<"Year: "<<year<<endl;
    fout<<"Was asking $"<<a_price<<endl;
    fout<<"Now asking $"<<d_price<<endl;
    
    fout.close();
    return 0;
}
