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
// wanted to a make user defined data structure 

class linkedlist{
    public:
    node* head;
    node* tail;
    int size;
    linkedlist(){
        head=NULL;
        tail=NULL;
        size=0;
    }
   void insertatend(int val){
        node* temp=new node(val);
       if(size==0){
           head=tail=temp;
       }
       else{
           tail->next=temp;
           tail=temp;
       }
       size++;
   }
   void insertathead(int val){
       node* temp=new node(val);
       if(size>0){
           temp->next=head;
           head=temp;
       }
       else{
           head=tail=temp;
       }
       size++;
   }
    void insertatindex(int index, int val){
       
       if(index<0 || index>size)
       cout<<"Invalid opration"<<endl;
       else if(index==0)
       insertathead(val);
       else if(index==size) 
           insertatend(val);
    else{
        node* t=new node(val);
        node* temp=head;
        for(int i=1;i<=index-1;i++){
            temp=temp->next;
        }
        t->next=temp->next;
        temp->next=t;
        size++;
    }
    }
    void deleteathead(){
        if(size==0){
            cout<<"list is empty"<<endl;
            return ;
        }
        head=head->next;
    }
    void deleteattail(){
        if(size==0){
            cout<<"List is emplty"<<endl;
            return ;
        }
        else{
            node* temp=head;
            while(temp->next!=tail){
                temp=temp->next;
            }
            temp->next=NULL;
            tail=temp;
            size--;
        }
       
    }
     void deleteatindex(int index){
            if(index<0 || index>size){
                cout<<"Invalid index";
            }
            else if(index==0) deleteathead();
            else if(index==size) deleteattail();
            else{
                node* temp=head;
                for(int i=1;i<=index-1;i++){
                    temp=temp->next;
                }
                temp->next=temp->next->next;
                size--;
            }
        }
   void display(){
       node* temp=head;
       while(temp!=NULL){
           cout<<temp->val<<" ";
           temp=temp->next;
       }
       cout<<endl;
   }
};


int main() {
    linkedlist ll;
    ll.insertatend(10);
    cout<<ll.size<<endl;
    ll.display();
    ll.insertatend(20);
    ll.display();
    cout<<ll.size<<endl;
    ll.insertatend(30);
    ll.insertatend(40);
    ll.insertatend(50);
    ll.insertatend(60);
    ll.insertatend(70);
    cout<<ll.size<<endl;
    ll.display();
    ll.insertathead(100);
    ll.display();
   cout<<ll.size<<endl;
   ll.insertatindex(0,150);
   ll.display();
   ll.insertatindex(9,200);
   ll.display();
   ll.insertatindex(20,200);
   ll.display();
   ll.insertatindex(6,120);
   ll.display();
   ll.deleteathead();
   ll.display();
   ll.deleteathead();
   ll.display();
   ll.deleteattail();
   ll.display();
   ll.deleteatindex(3);
   ll.display();
   