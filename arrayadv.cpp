//Program for reversing an array..
#include<iostream>
using namespace std;
void swap(int *x,int *y);
int main(){
    int A[10]={1,5,6,7,89,90};
    cout<<"Array before reversal is: "<<endl;
    for(int i=0;i<6;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    //Reversing the array using an auxiliary array..
    int B[10];
    for(int i=5,j=0;i>0,j<6;i--,j++){
        B[j]=A[i];
    }
    for(int i=0;i<6;i++){
        A[i]=B[i];
    }
    cout<<" Array after reversal is :"<<endl;
    for(int i=0;i<6;i++){
        cout<<A[i]<<" ";
    }
    //Method 2 to reverse an array..
    int p=0;
    int q=5;
    while(p<q){
        swap(&A[p],&A[q]);
        p++;
        q--;
    }
     cout<<endl<<" Array after reversal is :"<<endl;
    for(int i=0;i<6;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
void swap(int *x,int *y){
    int temp=0;
    temp=*x;
    *x=*y;
    *y=temp;
}