#include<iostream>
using namespace std;
int reverse(int arr[],int n){
    int aux[n];
    for(int i=0;i<n;i++){
        aux[n-1-i]=arr[i];
    }
    for(int j=0;j<n;j++){
        arr[j]=aux[j];
        cout<<arr[j]<<endl;
    }
    return 1;
}
int main(){
    //Program for traversal of an array
    int array[]={12,34,56,78,90};
    int size=sizeof(array)/sizeof(int);
    cout<<"Array before reversal is: "<<endl;
    for(int i=0;i<(size);i++){
        cout<<i[array]<<endl; // or we can write cout<<arr[i]<<endl;
    }
    //Calling the reverse function
    cout<<"Array after reversal is:"<<endl;
    reverse(array,size);
    return 0;
    
    
}