//
//  main.cpp
//  Customer
//
//  Created by Matthew Kuo on 2018/6/20.
//  Copyright © 2018 Matthew Kuo. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.hpp"
const int MIN_PER_HOUR=60;
bool newCustomer(double x);
using namespace std;
int main(int argc, const char * argv[]) {
    srand(time(0));
    cout<<"Case Study: Bank of Heather Automatic Teller\n";
    cout<<"Enter maximum size of queue: ";
    int qs;
    cin>>qs;
    Queue line(qs);
    
    cout<<"Enter the number of simulation hours: ";
    int hours;
    cin>>hours;
    long cycleLimit=MIN_PER_HOUR*hours;
    
    cout<<"Enter the average number of customers per hour: ";
    double perHour;
    cin>>perHour;
    double min_per_cust;
    min_per_cust=MIN_PER_HOUR/perHour;
    
    Item temp;
    long turnaways=0;
    long customers=0;
    long served=0;
    long sum_line=0;
    int wait_time=0;
    long line_wait=0;
    
    for(int cycle=0; cycle<cycleLimit; cycle++){
        if(newCustomer(min_per_cust)){
            if(line.isFull())
                turnaways++;
            else{
                customers++;
                temp.set(cycle);
                line.enqueue(temp);
            }
        }
        if(wait_time<=0&&!line.isEmpty()){
            line.dequeue(temp);
            wait_time=temp.ptime();
            line_wait+=cycle-temp.when();
            served++;
        }
        if(wait_time>0)
            wait_time--;
        sum_line+=line.queueCount();
    }
    if(customers>0){
        cout<<"customers aceepted: "<<customers<<endl;
        cout<<"  customers served: "<<served<<endl;
        cout<<"         turnaways: "<<turnaways<<endl;
        cout<<"average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout<<(double)sum_line/cycleLimit<<endl;
        cout<<"average wait time: "<<(double)line_wait/served<<" minutes"<<endl;
    }
    else
        cout<<"No customers!\n";
    cout<<"Bye!\n";
}
bool newCustomer(double x){
    return (std::rand()*x/RAND_MAX<1);
}
