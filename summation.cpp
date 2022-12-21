#include<iostream>
using namespace std;
int summation(int n);
int isum(int n);
int isum(int n){
    int i=1,sum=0;
    for(i=1;i<=n;i++){
        sum=sum+i;

    }
    return sum;
}
int summation(int n){
    int sum=0;
    sum=(n*(n+1))/2;
    return sum;
}
int recursum(int n){
    if(n==0){
        return 0;
    }
    else{
        return recursum(n-1)+n;
    }
}
/*int summation(int n){
    static int sum=0;
    if(n>0){
        sum=sum+n;
        summation(n-1);
    }
    return sum;
}*/
int main(){
    int result=0;
    //result=summation(10);
    result=recursum(10);
    cout<<"sum of first 10 natural numbers is: "<<result<<endl;
}