 #include<bits/stdc++.h>
 using namespace std;
 // display the queue in normal order
  // aage se nikalke peeche bhej do
void display(queue<int> &q){
    for(int i=0;i<q.size();i++){
     int x=q.front();
     cout<<x<<" ";
     q.pop();
     q.push(x);
 }
 cout<<endl;
}

// reverse the queue using the stack 
void reverse(queue<int> &q){
    stack<int> s;
    // empty the queue to fill the stack
    while(q.size()>0){
        int x=q.front();
       s.push(x);
       q.pop();
    }
    
    // empty the stack to fill the queue
    while(s.size()>0){
        q.push(s.top());
        s.pop();
    }
}
 int main(){
queue<int> q;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);

// // remove the even index of queue elemenet 0 baed indexing
//  int n=q.size();
//  for(int i=0;i<n;i++){
//      if(i%2!=0){
//          int x=q.front();
//          q.push(x);
//      }
//      q.pop();
//  }



    return 0;
 }