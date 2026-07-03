#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node* prev;
    node(int val){
        this->val=val;
        next=prev=NULL;
    }
};
 void display(node* head){
        while(head){
            cout<<head->val<<" ";
            head=head->next;
        }
        cout<<endl;
    }
    
void displaybyreverse(node* tail){
        while(tail){
            cout<<tail->val<<" ";
            tail=tail->prev;
        }
        cout<<endl;
    }
 void displaybyrec(node* head){
     if(head==NULL ) return;
     cout<<head->val<<" ";
     displaybyrec(head->next);
 }
 void displaybyrecrev(node* head){
     if(head==NULL ) return;
     displaybyrecrev(head->next);
     cout<<head->val<<" ";
 }
int main() {
 // CREATING A DOUBLY LINKEDLIST
 
    node* a=new node(10);
    node* b=new node(20);
    node* c=new node(30);
    node* d=new node(40);
    node* e=new node(50);
    
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->prev=d;
    d->prev=c;
    c->prev=b;
    b->prev=a;
    
    display(a);
    displaybyreverse(e);
    displaybyrec(a);
    cout<<endl;
    displaybyrecrev(a);
    


    return 0;
}