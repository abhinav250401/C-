//Program to understand and implement concept of reference in C++
#include<iostream>
using namespace std;
int main(){
    int a=10;//Normal integer variable...
    int &r = a; // 'r' declared as reference but not initialized,r must be intialised while declaration only..
    cout<<a<<" "<<r<<endl;
    a=100;
    cout<<r<<endl;
    cout<<&(a)<<" "<<&(r)<<endl; //Printing the address of a and r
    int b=987;
    r=b;
    cout<<a;
}