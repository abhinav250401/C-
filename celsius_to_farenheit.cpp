#include<iostream>
using namespace std;
/*int main(){
    double temperature;
    cout<<"Enter the temperature in degree Celsius:"<<endl;
    cin>>temperature;
    double converted_temp;
    converted_temp=(temperature*1.8)+32;
    cout<<"Temperature in Farenheit is :"<<converted_temp;
    return 0;
}*/
// Write a CPP program to convert farenheit to celsius using only one variable
int main(){
    double fTemp;
    cout<<"Enter the temperature in Farenheit: "<<endl;
    cin>>fTemp;
    fTemp=(fTemp-32)/1.8;
    cout<<"Temperature after conversion is: "<<fTemp;
    return 0;

}