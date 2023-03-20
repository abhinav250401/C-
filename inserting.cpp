#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
} *first;



void insertion(int value, int pos){
    Node *q;
    Node *p;
    q= new Node;
    q->data=value;
    
    if(pos==0){
       first=q;
    }
    else{
    p=first;
    for(int i=0;i<pos-1 && p;i++){
        p=p->next;
        q->next=p->next;

    }
    }

}