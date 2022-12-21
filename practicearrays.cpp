#include<iostream>
#include<stdio.h>
using namespace std;
/*int main(){
  int n;
  cout<<"Enter size"<<endl;
  cin>>n;
  int A[n]={12,23,45};
  for(int x:A){
    cout<<x;
      }
      return 0;
}*/
//Passing array as a  parameter to function..
void fun(int *A,int n){
  cout<<" Value of A is :"<<A<<endl;
  cout<<" Value to which A points is: "<<*(A)<<endl;
  int i=0;
  for(i=0;i<n;i++){
    cout<<A[i]<<" ";
  }
  //Using Pointer Manipulation..
  /*cout<<*(A)<<" ";
  cout<<*(A+1)<<" ";
  cout<<*(A+2)<<" ";
  cout<<*(A+3)<<" ";*/
}
int * func(int size){
  int *pointer;
  pointer = new int[size];
  for(int i=0;i<size;i++){
    pointer[i]=i+1;
  }
  return pointer;
}
int main(){
  /*int A[]={1,23,656,890,55,33,66,89};
  int size=sizeof(A)/sizeof(int);
  int *ptr;
  ptr=A;
  cout<<" Value of ptr is: "<<ptr<<endl;
  fun(A,size);*/
  int *ptr;
  ptr=func(5);
  for(int i=0;i<5;i++){
    cout<<ptr[i]<<" ";
  }
  return 0;
}