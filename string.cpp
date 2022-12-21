#include<iostream>
using namespace std;
int getlength(char name[]){
    int count=0;
    for(int i=0; name[i] !='\0';i++){
        count++;

    }
    return count;
}
void reverse(char name[],int n){
    int s=0,e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);

    }
    

}
int pallindrome(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(name[s] != name[e]){
            return 0;

        }
        else{
            s++;
            e--;
        }
    return 1;
    }
    
}
int main(){
    char name[20];
    cin>>name;
    cout<<"Your name is : "<<endl;
    cout<<name;
     int result=getlength(name);
    cout<<"Length of the string is:"<<" "<<result<<endl;
    reverse(name,result);
    cout<<"Your name after reversal  is : "<<endl;
    cout<<name;
    int flag=pallindrome(name,result);
    cout<<" Flag is "<<" "<<flag;
    return 0;
    
}