//Declaring 2D Arrays
//Method I
#include<iostream>
using namespace std;
int main(){
// int A[3][4]={{1,2,3,4},{5,6,7,8}};
// cout<<**(A)<<endl;
// cout<<**(A+1)<<endl;
// cout<<**(A+2)+3<<endl;
// for(int i=0;i<3;i++){
//     for(int j=0;j<4;j++){
//         cout<<A[i][j]<<" ";
//     }
//     cout<<endl;
// }
//Method II - Partial in Stack Partial in Heap..

// int *A[3];
// A[0] = new int [4];
// A[1] = new int [4];
// A[2] = new int [4];

//  for(int i=0;i<3;i++){
//      for(int j=0;j<4;j++){
//          cout<<A[i][j]<<" ";
//     }
// cout<<endl;
//  }
//Method III Completely in Heap.
int **A;
A= new int *[3];
A[0]= new int[4];
A[1]= new int[4];
A[2]= new int[4];
 for(int i=0;i<3;i++){
     for(int j=0;j<4;j++){
         cin>>A[i][j];
    }
 }
  for(int i=0;i<3;i++){
     for(int j=0;j<4;j++){
         cout<<A[i][j]<<" ";
    }
cout<<endl;
 }
return 0;
}