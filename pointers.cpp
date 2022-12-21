#include<iostream>
#include<stdlib.h> //for C language implementation
using namespace std;
struct rectangle{
    int l;
    int b;
};
int main(){
    //int a=10;
    //cout<<sizeof(a)<<endl;
    //int *p;
    //cout<<sizeof(p)<<endl;
    //p=&a;
    //cout<<p<<" "<<&a<<endl;
    //cout<<"Value to which the pointer points is:"<<*(p);
    //Pointer to an array
    //int a[5]={2,4,6,8,10};
    //int *p;
    //p=a; //Pointer to array acts as the name of array itself.
    //Array name points to the first element of the array.
    //cout<<a<<endl;
    //p=&a -- Wrong syntax
    //p=&a[0];
    //cout<<p<<endl;
    //for(int i=0;i<5;i++){
      //  cout<<a[i]<<endl;
        //cout<<p[i]<<endl;
    //}
    //Creating an array in heap memory..
    /*int *p;
    p=(int *)malloc(5 *sizeof(int));
    p[0]=10;
    p[1]=11;
    p[2]=3;
    p[3]=90;
    p[4]=98;
    cout<<sizeof(p)<<endl;
    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }*/
    //Playing with Pointer sizes...
    int *p;
    char *p1;
    float *p2;
    double *p3;
    struct rectangle *r;
    cout<<sizeof(p)<<" "<<sizeof(p1)<<" "<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<" "<<sizeof(r);
    //Size of pointers is compiler specific ,its independent of pointer data type..

    return 0;

}