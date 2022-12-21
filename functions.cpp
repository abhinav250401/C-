#include<iostream>
using namespace std;
int add(int a,int b){//Formal Parameters It is call by value 
    int c=a+b;
    return c;

}
void swap(int *x,int *y){ //Call by adress method 
    int temp;
    cout<<" The value of x is: "<<x<<endl;
    cout<<endl<<" The value of y is: "<<y<<endl;
    temp=*(x);
    *(x)=*(y);
    *(y)=temp;
}
void swapping(int &p,int &q){ //Call by reference method....
    int temp;
    cout<<" Address of p is: "<<&(p)<<endl;
    cout<<" Address of q is "<<&(q)<<endl;
    temp=p;
    p=q;
    q=temp;
}
int main(){
    int num1,num2,sum=0;
    num1=90;
    num2=98;
    //sum=add(num1,num2); //Actual Parameters
    //cout<<"Sum is : "<<sum<<endl;
    //cout<<"Adress of num1 is "<<&(num1)<<" and address of num2 is "<<&(num2)<<endl;
    cout<<"Address of num1 is "<<&(num1)<<" Address of num2 is: "<<&(num2);
    cout<<"Before swapping values are: "<<num1<<" and "<<num2<<endl;
    swapping(num1,num2);
    cout<<"First number after swapping is :"<<num1<<" And second number after swapping is "<<num2<<endl;
    return 0;
}