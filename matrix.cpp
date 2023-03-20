#include<iostream>
#include<vector>
using namespace std;
// int main(){
    
//     int matrix[3][3]={10,2,3,5,6,8};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     int *p,*q;
//     p=&(matrix[0][0]);
//     q=&(matrix[0][1]);
//     cout<<p<<" "<<q<<endl;      
//   return 0;                
    
// }

//Double Pointer Method to create multidimensional arrays..
// int main(){
//     int m=3;
//     int n=3;
//     int **arr;
//     arr=new int *[m];
//     for(int i=0;i<m;i++){
//         arr[i]=new int[n];
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             arr[i][j]=i+j;
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// return 0;
// }

//Creating Array of pointers...
// int main(){
//     int m=3;
//     int n=3;
//     int *arr[m];//Array of pointers...
   
//     for(int i=0;i<m;i++){
//         arr[i]=new int[n];
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             arr[i][j]=i+j;
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// return 0;
//}

//Creating array of vectors....
// int main(){
//    

//Creating vector of vectors...
int main(){
    vector<vector<int>> arr;
    int m=3;
    int n=3;
    for(int i=0;i<m;i++){
        vector<int> v;
        for(int j=0;j<n;j++){
            v.push_back(10);
        }
        arr.push_back(v);
    }
 for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }
return 0;
}