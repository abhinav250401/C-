#include<iostream>
using namespace std;
int main(){
    //Scalar Variable
    int var=10;
    //Vector Variable - Having some dimension..
    int A[5];//An array has been declared with name A of int type.
    int B[5]={1,3,4};
    //cout<<0[B];
    //cout<<*(B+1);
    for(int x:B){
       // cout<<x;
    }
    int arr[5]={2,4,6,8,10}; 
    for(int h:arr){
        cout<<h;
        }//Adding an extra value will return an error..
    int *p;//Pointer Variable
    //Declaration of an array in heap..
    p= new int[5];
    p[0]=1;
    p[1]=3;
    p[2]=5;
    p[3]=7;
    p[4]=9;
    for(int i=0;i<5;i++){

        cout<<p[i];
    }

    return 0;


}