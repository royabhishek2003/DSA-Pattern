// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack>
#include<string>
using namespace std;

string res(string val1, string val2, char ch){
    string s="";
    s+=val1;
    s.push_back(ch);
    s+=val2;
    return s;
}
int main() { 
 
  // postfix to infix conversion
  
 
 string s;
 cin>>s;
 stack<string> val;
 for(int i=0;i<s.length();i++){
     if(s[i]>=48 && s[i]<=57)  val.push(to_string(s[i]- 48));
     else{   
         char ch=s[i];
         string val2=val.top();
         val.pop();
         string val1=val.top();
         val.pop();
         string ans=res(val1, val2,ch);
         val.push(ans);
             }
         }
 cout<<val.top();


    return 0;
}