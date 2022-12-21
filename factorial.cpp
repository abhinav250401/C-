#include<iostream>
using namespace std;
int factorial(int n);
int main(){
    int num,result=0;
    cout<<"Please Enter the number which you want to find the factorial of.. "<<endl;
    cin>>num;
    result=factorial(num);
    cout<<"The factorial of the number is: "<<result;
    return 0;
}
int factorial(int n){
    if(n==0){
        return 1;
    }
    else if(n<0){
        cout<<"Factorial of negative number doesn't exist "<<endl;
        return(0);
    }
    else{
        return (factorial(n-1)*n);
    }
}