#include<iostream>
using namespace std;
void fun(int n){
    if(n>0){
        
        fun(n-1); //Recursive call to a function.. //Head reursion
        cout<<n<<endl;
    }
}
int main(){
    int x=5;
    fun(x);
    return 0;
}