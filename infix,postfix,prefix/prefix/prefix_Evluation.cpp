#include <iostream>
#include<stack>
#include<string>
using namespace std;

int res(int val1, int val2, char ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
int main() { 
 
  //prefix evaluation
 
 
 string s;
 cin>>s;
 stack<int> val;
 for(int i=s.length()-1;i>=0;i--){
     if(s[i]>=48 && s[i]<=57)  val.push(s[i]- 48);
     else{   
         char ch=s[i];
         int val1=val.top();
         val.pop();
         int val2=val.top();
         val.pop();
         int ans=res(val1, val2,ch);
         val.push(ans);
             }
         }
 cout<<val.top();


    return 0;
}