#include <iostream>
#include<stack>
#include<string>
using namespace std;

string res(string val1, string val2, char ch){
    string s="";
    s+=val1;
    s+=val2;
    s.push_back(ch);
    return s;
}
int main() { 
 
  // prefix to postfix
  
 
 
 string s;
 cin>>s;
 stack<string> val;
 for(int i=s.length()-1;i>=0;i--){
     if(s[i]>=48 && s[i]<=57)  val.push(to_string(s[i]- 48));
     else{   
         char ch=s[i];
         string val1=val.top();
         val.pop();
         string val2=val.top();
         val.pop();
         string ans=res(val1, val2,ch);
         val.push(ans);
             }
         }
 cout<<val.top();


    return 0;
}