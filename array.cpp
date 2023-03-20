#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct Array{
    int A[10];
    //int size;
    int length;
};

// void swap(int *x,int *y){
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
    
// }
// int unordered_linear_search(struct Array *arr,int data){
//     for(int i=0;i<arr->length;i++){
//         if(arr->A[i]==data){
//         //swap(&arr->A[i],&arr->A[i-1]); -> Transposition method
//         //return i-1;
//         //Move to front/head
//         swap(&arr->A[0],&arr->A[i]);
//         return 0;
//         }
//     }
//     return -1;
// }
// //Getter method for array
// // int Get(struct Array *arrr,int index){
// //     return arrr->A[index];
// // }
// // int Set(struct Array *arrr,int index,int x){
// //      arrr->A[index]=x;
// // }
// int sum(struct Array *arrr){
//     int total=0;
//     for(int i=0;i<arrr->length;i++){
//        total=total+ arrr->A[i];
//     }
//     return total;
// }
int avg(struct Array *arrr){
    int total=0;
    for(int i=0;i<arrr->length;i++){
       total=total+ arrr->A[i];
    }
    float avg=total/arrr->length;
    return avg;
}
int max(struct Array *arrr){
    int max=arrr->A[0];
    for(int i=0;i<arrr->length;i++){
        if(arrr->A[i]>max){
            max=arrr->A[i];
        }
    }
    return max;
}
int min(struct Array *arrr){
    int min=arrr->A[0];
    for(int i=0;i<arrr->length;i++){
        if(arrr->A[i]<min){
            min=arrr->A[i];
        }
    }
    return min;
}
// int ordered_linear_search(struct Array *ar,int data){
//     for(int i=0;i<ar->length;i++){
//         if(ar->A[i]==data){
//             return i;
//         }
//         else if(ar->A[i]>data){
//             return -1;
//         }
//     }
//     return -1;
// }
int main(){
    struct Array a;
    cout<<"Enter the number of elements: ";
    cin>>a.length;
    for(int i=0;i<a.length;i++){
        cout<<" Element at index position "<<i<<" = ";
        cin>>a.A[i];
    }
//    cout<<unordered_linear_search(&a,40)<<endl;
//    cout<<Get(&a,4)<<endl;
//    Set(&a,4,7890);
//    cout<<a.A[4];
//cout<<"Sum of the array elements is: "<<sum(&a);
cout<<" Maximum element in array is:"<<max(&a);
cout<<endl;
cout<<" Minmimum element in array is: "<<min(&a);
cout<<endl;
cout<<" avg of all elements present in array is "<<avg(&a);

}