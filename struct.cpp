#include<iostream>
#include<stdlib.h>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
/*int main(){
    struct Rectangle r; //Normal structure variable/object..
    r.length=10;//Access via dot operator..
    r.breadth=20;//
    cout<<r.breadth<<" "<<r.length<<endl;
    Rectangle *p;//Creating pointer
    p= new Rectangle; //Creating an instance of rectangle in Heap..
    //Syntax in C : p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->breadth=90;
    p->length=100;
    cout<<p->breadth<<" "<<p->length<<endl;
    //p.length=89; //wrong syntax
    //*p.length=87; wrong
    //*(p).length=20;
    cout<<"Size of p is:"<<sizeof(p)<<" "<<endl;
    return 0;

}*/
//Passing structure as a parameter..
void fun(struct Rectangle r1){ //Pass by value
        r1.length=90;
        r1.breadth=20;
       cout<<"Length: "<<r1.length;
       cout<<endl<<" Breadth: "<<r1.breadth<<endl;
}
void fun1(struct Rectangle &r0){ // Pass by reference..
    r0.breadth=87;
    r0.length=85;
    cout<<" length afterwards is "<<r0.length<<endl;
    cout<<" Breadth afterwards is "<<r0.breadth<<endl;
}
void passbyaddress(struct Rectangle *ptr){ //Pass by address
         cout<<" Value of ptr is: "<<ptr<<endl;
         ptr->breadth=65;
         ptr->length=97;
         cout<<ptr->breadth<<" "<<ptr->length<<endl;

}
struct Rectangle *returnstruct(){
    struct Rectangle *pointer;
    pointer = new Rectangle;
    pointer->breadth=945;
    pointer->length=876;
    return pointer;
}
int main(){
    struct Rectangle r;
    r.length=50;
    r.breadth=90;
    cout<<" Length is : "<<r.length<<" "<<"Breadth is: "<<r.breadth<<endl;
    fun(r);
    fun1(r);
    cout<<" Length is : "<<r.length<<" "<<"Breadth is: "<<r.breadth<<endl;
    cout<<" Address of variable r is :"<<&(r)<<endl;
    passbyaddress(&r);
     cout<<" Length is : "<<r.length<<" "<<"Breadth is: "<<r.breadth<<endl;
     struct Rectangle *point;
     point=returnstruct();
     cout<<point->breadth<<" "<<point->length<<endl;
    

    return 0;
}