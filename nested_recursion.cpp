#include<iostream>
#include<stdio.h>
int fun(int n);
int fun(int n){
    if(n>100){
        return(n-10);

    }
    else{
        return fun(fun(n+11)); //recursive call is passed as a parameter..
    }

}
int main(){
    int result=0;
    result=fun(110);
    printf("%d ",result);
    return 0;
}