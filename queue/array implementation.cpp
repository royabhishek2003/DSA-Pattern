#include<iostream>
#include<stack>
#include<vector>
#include<queue>
using namespace std;
// array implementation
class Queue{
    public:
    int f;
    int b;
    vector<int> arr;
    int size;   // current size
    int capacity;   // max size
    Queue(int n){
        f=0;
        b=0;
        size=0;
       arr.resize(n);
       capacity=n;
    }
    void push(int val){
       if(size==capacity) {
           cout<<"Array is full ";
           return;
    }
    else {
        arr[b]=val;
        b++;
        size++;
    }
    }
    void pop(){
        if(size==0) {
            cout<<"Array is empty";
            return;
        }
        f++;
        size--;
    }
    int front(){
        if(size==0) {
            cout<<"Array is empty";
            return -1;
        }
        else{
            return arr[f];
        }
    }
    
    int back(){
        if(size==0) {
            cout<<"Array is empty";
            return -1;
        }
        else{
            return arr[b-1];
        }
    }
    
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
 int main(){
     
     int n;
     cout<<"Enter the size of queue :";
     cin>>n;
   Queue q(n);
   
   
   q.push(10);
   q.push(20);
q.push(30);
   cout<<q.size<<endl;
   cout<<q.back()<<endl;
   cout<<q.front()<<endl;
q.push(40);
q.push(50);
cout<<q.size<<endl;
cout<<q.back()<<endl;
  cout<<q.front()<<endl;
  q.display();
  q.pop();
  cout<<q.size<<endl;
  q.display();
   
   
    return 0;
}