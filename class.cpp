#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle();
    Rectangle(int len,int bre);
    int area();
    int perimeter();
    int get_length();
    void set_length(int l);
    void display();
    ~Rectangle();
};
Rectangle :: Rectangle(){
    length=0;
    breadth=0;
}
Rectangle:: Rectangle(int len,int bre){
    length=len;
    breadth=bre;
}
int Rectangle :: area(){
    int area=0;
    area=length*breadth;
    return area;
} 
int Rectangle::perimeter(){
    int p=0;
    p=2*(length+breadth);
    return p;
}
int Rectangle::get_length(){
    return length;
}
void Rectangle :: set_length(int l){

    length=l;
}
void Rectangle::display(){
    cout<<"Length is : "<<length<<endl;
    cout<<"Breadth is : "<<breadth<<endl;
}
Rectangle::~Rectangle(){
    cout<<"Destructor"<<endl;
}
int main(){
    Rectangle r;
    cout<<" Length and breadth are initilaized as : "<<endl;
    r.display();
    Rectangle r1(15,10);
    cout<<" Length and breadth are initilaized as : "<<endl;
    r1.display();
    int result=0;
    result=r1.area();
    cout<<"Area is :"<<result<<endl;
    return 0;
    
}
