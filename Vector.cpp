#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(){
    vector<int> v;
    v.assign(5,10);
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Size->"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.capacity()<<endl;
    v.push_back(3);
   // cout<<v.capacity()<<endl;
    //cout<<v.size()<<endl;
    //cout<<v.at(2)<<endl;
    //cout<<v.front();
    //cout<<v.back()<<endl;
    //cout<<"Front iterator"<<v.begin()<<endl;
    //cout<<"Back Iterator"<<v.end()<<endl;
    for(auto i =v.rbegin();i !=v.rend(); ++i){
        cout<<" "<< *(i);

    }
    
    return 0;
}