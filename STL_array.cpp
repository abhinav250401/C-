#include<iostream>
#include<array>
using namespace std;
int main(){
    //int basic[3]={1,2,3};
    array<int,4> a={1,2,3,4};
    array<int,4> arr={6,1,4,3};
    cout<<" Array before swapping is "<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    arr.swap(a);
    cout<<" Array after swapping is "<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int x:arr){
        cout<<x<<" ";
    }
    array<int,10> arrays;
    arrays.fill(10);
    for(int q:arrays){
        cout<<q;
    }

    /*int size=a.size();
    int msize=a.max_size();
    cout<<"Size of the array is :"<<size<<endl;
    cout<<"Maximum size of array is:"<<msize<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Element at second index is : "<<a.at(2)<<endl;
    cout<<"Is array empty ?->"<<a.empty()<<endl;
    //For accessing first element
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;*/
    return 0;
}