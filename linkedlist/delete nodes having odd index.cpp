#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node(int val){
        this->val=val;
    }
};
class linkedlist{
    public:
    node* head;
    node* tail;
    int size;
    linkedlist(){
        head=tail=NULL;
        size=0;
    }
    void insertattail(int val){
        node* temp=new node(val);
        if(size==0){
            head=tail=temp;
            size++;
        }
        else{
            tail->next=temp;
            tail=temp;
            size++;
        }
    }
    // i want to delete the node at odd indices
    void deleteoddindices(){
      node* c1=head->next;
      node* c2=head->next;
      while(c2!=NULL && c2->next!=NULL){
          c2=c1->next->next;
          c1->next=c2;
          c1=c2;
      }
    }
     void display(){
        node* temp=head->next;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    };
int main() {
    linkedlist ll;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        ll.insertattail(x);
    }
    ll.display();
    ll.deleteoddindices();
    ll.display();
   
    
  
