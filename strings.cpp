#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
string decimal_to_binary(int n);
int binary_to_decimal(string number){
    int ans=0;
    int i=0;
    for(int j=number.length()-1;j>=0;j--){
        ans=ans+(int(number[j]-'0')*pow(2,i));//Important Concept ...
        i++;
    }
    return ans;
}
int main(){
    // string str;
    // str="Abhinav Pandey";
    // cout<<str<<endl;
    // cout<<str.length()<<endl;
    // str=str+" Rajat ";
    // cout<<str<<endl;
    // cout<<str.substr(9)<<endl;
    // cout<<str.find("pq")<<endl;
    // for(auto it=str.begin();it!=str.end();it++){
    //     cout<<(*it);
    // }
    // cout<<endl;
    // sort(str.begin(),str.end());
    // //reverse(str.begin(),str.end());
    // string new_string="";
    // int l=str.length()-1;
    // while(l>=0){
    //     new_string=new_string + str[l];
    //     l--;
    // }
    // cout<<str<<endl;
    // cout<<new_string;
    // return 0;
    // int num;
    // cout<<"Enter the number which you want to convert to Binary : "<<endl;
    // cin>>num;
    // string result=decimal_to_binary(num);
    // cout<<result<<endl;
    int answer = binary_to_decimal("1011011");
    cout<<answer;
    return 0;
}
string decimal_to_binary(int n){
    string binary ="";
    while(n>0){
        int t= n%2;
        binary = binary + to_string(t);
        n=n/2;
    }
    reverse(binary.begin(),binary.end());
    return binary;
}