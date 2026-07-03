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
    void deleteathead(){
        head=head->next;
        size--;
    }
    void deleteatindex(int index){
        if(index==0) deleteathead();
        else{
            node* temp=head;
            for(int i=1;i<=index-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
        }
    }
    // i want to delete the node having odd value
    void deleteoddvalue(){
        node* temp=head;
        int count=0;
        while(temp!=NULL){
            if(temp->val%2!=0){
                deleteatindex(count);
            }
            else{
                count++;
            }
            temp=temp->next;
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
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        ll.insertattail(x);
    }
    ll.display();
    ll.deleteoddvalue();
    ll.display();
    
  

    return 0;
}