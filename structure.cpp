
#include<iostream>
#include<stdio.h>
using namespace std;
struct Rectangle{  //Defining a structure
    int length;
    int breadth;
    char x;
} r1; //Declaring a struct variable
struct Cards{
    int face;
    int shape;
    int color;
};
int main(){
    cout<<sizeof(Rectangle)<<endl;
    cout<<sizeof(r1)<<endl;
    r1={10,20}; //Intialising the struct variable..
    cout<<"Area of the rectangle is :"<<r1.length*r1.breadth<<endl;
    struct Cards deck[52]; //Array of structures
    cout<<sizeof(deck[0]);
    return 0;
}