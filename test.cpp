#include<iostream>
using namespace std;
int main(){
    int px, py, qx, qy, rx, ry;
    cin>>px>>py>>qx>>qy>>rx>>ry;
    cout<<(qy-py)*(rx-qx)-(qx-px)*(ry-qy)<<endl;
}
