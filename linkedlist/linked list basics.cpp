#include <iostream>
#include<vector>
using namespace std;  
// declares a node class

class node{
    public:
    int val;
    node* next;
    node(int a){
        val=a;
        next=NULL;
    }
};
// function to display the nodes value

void display(node* head){  
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
// function to display the nodes value using recursion

void displayrec(node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);
}

// function to return the size of a lnkedlist
int size(node* head){
    int count=0;
    node* temp= head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void insertlast(node* head,int x){ // insering the x node at last without having the access of tail

    node* temp=new node(x);
    while(head->next!=NULL){
       head= head->next;
    }
    head->next=temp;
}

int main() {
    node* a=new node(10);
    node *b=new node(20);
    node* c=new node(30);
    node* d=new node(40);
    node* e=new node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    
    // accessing the value of 
    // cout<<(a->next)->next->next->next->val;
    
    display(a);
    displayrec(a);
    cout<<endl;
    
    cout<<size(a);
    
 // insertlast(a,60);
    // display(a);
   

    return 0;
}