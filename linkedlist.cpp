#include<iostream>
#include<limits.h>
using namespace std;

//Creating a node..
class Node{
    public:
    int data;
     Node *next;
};

int sum(Node *p){
    int sum=0;
    int count=0;
    while(p){
        count++;
        sum=sum+p->data;
        p=p->next;
    }
    cout<<"The number of such nodes is "<<count<<endl;
    return sum;
}

int max(Node *p){
    int maximum=INT_MIN;
    while(p!=nullptr){
        if(p->data>maximum){
            maximum=p->data;
        }
        p=p->next;
    }
    return maximum;
}
 int main(){
    int A[]={3,5,111,90,11};
    Node *head;
    head= new Node;
    head->data=A[0];
    head->next=nullptr;
    Node *temp;
    Node *tail;
    tail=head;
    for(int i=1;i<5;i++){
        temp= new Node;
        temp->data=A[i];
        temp->next=nullptr;
        tail->next=temp;
        tail=temp;

    }

    Node *p;
    p=head;
    while(p!=nullptr){
        cout<<p->data<<" "<<flush;
        p=p->next;
    }
    cout<<endl;

    int result=sum(head);
    cout<<"Sum of all elements in the linked list is:"<<result<<" ";
    cout<<endl;
    cout<<"The maximum element in the linked list is: "<<max(head);
    return 0;
 }
