#include<iostream>
#include<stdio.h>
using namespace std;
template <class T> //Converting the class into a template..
class Arithmetic{
    T a;
    T b;
    public:
    Arithmetic(T a,T b){
        this->a=a;
        this->b=b;
    }
    T add(){
        T c=0;
        c=a+b;
        return c;
    }
    T sub(){
        T s=0;
        s=a-b;
        return s;
    }
    ~Arithmetic(){
        cout<<"Destruction";
    }
};
int main(){
    Arithmetic<int> ar(10,5);
    cout<<"The sum is: "<<ar.add()<<endl;
    cout<<" The difference is "<<ar.sub()<<endl;
    Arithmetic<float> fl(10.87,7.89);
    cout<<"The sum is: "<<fl.add()<<endl;
    cout<<" The difference is "<<fl.sub()<<endl;

    return 0;
}