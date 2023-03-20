#include<iostream>
using namespace std;
int BinarySearch(int Arr[],int n,int data){
    int low=0;
    int high=n-1;
    
    while(low<=high){
      int mid=(low+high)/2;
      if(Arr[mid]==data){
        return mid;
      }
      else if(Arr[mid]>data){
        low=mid+1;
      }
      else{high=low-1;}
    }
    return -1;
}
int main(){
    int Array[15];
    int length;
    cout<<"Enter the no of elements : ";
    cin>>length;
    for(int i=0;i<length;i++){
        cin>>Array[i];
    }
    cout<<"Element Found at index "<<BinarySearch(Array,length,58);
    return 0;
}