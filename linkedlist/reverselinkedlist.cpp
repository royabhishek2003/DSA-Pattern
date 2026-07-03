#include<bits/stdc++.h>
using namespace std;
// recursive approach to reverse a linked list
class node{
    public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class linkedlist{
    public:
    node* head;
    linkedlist(){
        head=NULL;
    }
    void insert(int val){
        node* temp=new node(val);
       if(head==NULL){
        head=temp;
       }
         else{
              node* t=head;
              while(t->next!=NULL){
                t=t->next;
              }
              t->next=temp;
         }

   }
    void display(node* head){
         node* temp=head;
         while(temp!=NULL){
              cout<<temp->val<<" ";
              temp=temp->next;
         }
         cout<<endl;
    }
};

// recursive function to reverse the linked list
node* reverse(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* last= reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return last;
}

// Iterative approach to reverse the linkedlist 
// Teen pointer ke sath khelo    

node* reverseiterative(node* head){
node* prev=NULL;
node* curr=head;
node* nextptr=head;
while(curr!=NULL){
    nextptr=curr->next;
    curr->next=prev; // reverse the link
    prev=curr;
    curr=nextptr;// move to the next node 
}
return prev; // prev will be the new head of the reversed linked list

}
   
int main(){
    
    linkedlist ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.insert(5);
    node* head= ll.head;
    ll.display(head);
    node* newhead=reverse(head);
    ll.display(newhead);
    node* newhead2=reverseiterative(newhead);
    ll.display(newhead2);
    

    return 0;
}