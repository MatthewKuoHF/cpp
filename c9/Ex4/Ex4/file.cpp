//
//  file.cpp
//  Ex4
//
//  Created by Matthew Kuo on 2018/6/10.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//


#include <iostream>
#include "file.hpp"
using namespace std;
namespace SALES {
    void setSales(Sales & s, const double ar[], int n){
        double sum=0, ma=ar[0], mi=ar[0];
        for(int i=0; i<n; i++){
            sum+=ar[i];
            s.sales[i]=ar[i];
            if(ar[i]>ma)
                ma=ar[i];
            if(ar[i]<mi)
                mi=ar[i];
        }
        s.average=sum/n;
        s.max=ma;
        s.min=mi;
    }
    void setSales(Sales & s){
        double sum=0, ma=s.sales[0], mi=s.sales[0];
        for(int i=0; i<4; i++){
            sum+=s.sales[i];
            if(s.sales[i]>ma)
                ma=s.sales[i];
            if(s.sales[i]<mi)
                mi=s.sales[i];
        }
        s.average=sum/4;
        s.max=ma;
        s.min=mi;
    }
    void showSales(const Sales & s){
        for(int i=0; i<4; i++)
            cout<<s.sales[i]<<" ";
        cout<<endl;
        cout<<"Average= "<<s.average<<endl;
        cout<<"Maximum= "<<s.max<<endl;
        cout<<"Minimum= "<<s.min<<endl;
    }
}
