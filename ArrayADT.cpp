#include<iostream>
using namespace std;
//Creating a Class..
// class Array{
//     private:
//     int A[1000];
//     int length;

//     public:
//     Array(){
//         cout<<" Intialised"<<endl;
//     }
//     void create(){
//         cout<<"Enter the number of elements :"<<flush;
//         cin>>length;
//         for(int i=0;i<length;i++){
//             cin>>A[i];
//         }
//     }
//     void Display(){
//         for(int i=0;i<length;i++){
//             cout<<A[i]<<" ";
            
//         }
//         cout<<endl;
//     }
//     ~Array(){
//         cout<<" Destructed";
//     }
// };
// int main(){
//     Array Arr;
//     Arr.create();
//     Arr.Display();

//     return 0;
// } 

class Array{
    private:
    int *A;
    int size;
    int length;
    public:
    Array(int size){
        cout<<" Process Begins ....."<<endl;
        this->size=size;
        A= new int[size];
    }
    void Create(){
        cout<<" Enter the number of elements "<<endl;
        cin>>length;
        for(int i=0;i<length;i++){
            cout<<" Array element at index "<<i<<" = "<<flush;
            cin>>A[i];
        }
    }
    void Display(){
        for(int i=0;i<length;i++){
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }
    void Append(int item){
        A[length]=item;
        length++;
    }
    void Insert(int index,int item){
        if(index>=0 && index<length){
            for(int i=length;i>index;i--){
                A[i]=A[i-1];
            }
            A[index]=item;
            length++;
        }
        else if(index==length){
            A[index]=item;
            length++;
        }
        else{
            cout<<" Please insert a valid index:";
        }
    }
    int Delete(int index){
        int x=0;
        if(index>=0 && index<length){
            x=A[index];
            for(int i=index;i<length-1;i++){
                A[i]=A[i+1];
            }
            length--;
        }
        return x;
    }
    ~Array(){
        delete []A;
        cout<<" Process Completed..."<<endl;
        cout<<" Array Destroyed";
        
    }
};
int main(){
    Array Arr(10);
    Arr.Create();
    Arr.Display();
    Arr.Append(900);
    cout<<"Array after append operation is "<<endl;
    Arr.Display();
    Arr.Insert(3,1000);
    cout<<"Array after insert operation is "<<endl;
    Arr.Display();
    int p = Arr.Delete(0);
    cout<<"Array After deletion is :"<<endl;
    Arr.Display();
    cout<<"Deleted element is :"<<p;
    return 0;
}

