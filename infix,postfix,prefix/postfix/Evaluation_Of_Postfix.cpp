#include <bits/stdc++.h>
using namespace std;

int res(int val1, int val2, char ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
int main() { 
 // infix to prefix string s;

 string s;
 cin>>s;
 stack<int> val;
 for(int i=0;i<s.length();i++){
    if(s[i]==' ') continue;
    if(s[i]>='0' && s[i]<='9'){
        val.push(s[i]-'0');
    }
    else{   
        char ch=s[i];
        int val2=val.top();
        val.pop();
        int val1=val.top();
        val.pop();
        int ans=res(val1, val2,ch);
        val.push(ans);
            }
        }
 cout<<val.top();
    return 0;
}