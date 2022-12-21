#include<iostream>
#include<stdio.h>
using namespace std;
class Rectangle{
public:
    int length;
    int breadth;

void intialize(int l,int b){
    length=l;
    breadth=b;

}
int area(){
    int area=0;
    area=length*breadth;
    return area;
}
int perimeter(){
    int p=0;
    p=2*(length+breadth);
    return p;
}
};
int main(){
     Rectangle r;
    int len,bre;
    cout<<"Enter the length and breadth of rectangle: "<<endl;
    cin>>len;
    cin>>bre;
    r.intialize(len,bre);
    int res=0;
    res=r.area();
    cout<<"Area of the rectangle is: "<<res<<endl;
    cout<<"Perimeter of the rectangle is: "<<r.perimeter()<<endl;
}