#include<iostream>
#include<utility>
#include <bits/stdc++.h>
using namespace std;
int main(){
    //Defining a pair.
    pair<int,int> p;
    p=make_pair(45,43);
    pair<int,int> p1;
    p1={45,43};
    pair<int,int> &g=p1; //Reference Variable created.
    pair<int,int> l;
    int a,b=35;
    tie(ignore,a)=p;
    cout<<a<<" "<<b<<endl;
    //Declaring a pair of pair
    pair<int,pair<char,int>> pair1={90, {'a',67} };
    int x,y;
    char z;
    x=pair1.first;
    tie(z,y)=pair1.second;
    cout<<x<<" "<<y<<" "<<z;
    if(p==p1){
        cout<<"True";
    }
    //cout<<l.first<<endl;
    //cout<<l.second; //if pair not initialses them it gets automatically initialised to 0;
    /*cout<<"Enter the first element of the pair "<<endl;
    cin>>p.first;
     cout<<"Enter the second element of the pair "<<endl;
     cin>>p.second;
     cout<<p.first<<" "<<p.second;*/
    //Intializing pair using make_pair function..
    
    //cout<<p.first<<endl;
    //cout<<p.second<<endl;
    //cout<<p1.first<<" "<<p1.second<<endl;
    //cout<<g.first<<endl;
    //g.first=90;
    //cout<<p1.first;
    //p1.swap(p);
    //cout<<p.first<<" "<<p.second<<endl;
    //cout<<p1.first<<" "<<p1.second<<endl;
     return 0;

}