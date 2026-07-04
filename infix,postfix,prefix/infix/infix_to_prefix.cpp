
#include <bits/stdc++.h>
using namespace std;
int main() {
    // conversion from infix to postfix 
    // just like evaluate infix without brackets difference is here we do not evalue val1 ope val2 instead of make a string of it and push it back to stack
    string s= "2+6*4/8-3";
    stack<string> val;
    stack<char> op;

    unordered_map<char,int> priority;
    priority['*']=2;
    priority['/']=2;
    priority['+']=1;
    priority['-']=1;
    
    for(char & ch: s){
        if( ch==' ') continue;
        if(ch-'0' >=0 && ch -'0'<=9){
            val.push(to_string(ch-'0'));
        }
        else{
            while(!op.empty() && priority[ch] <= priority[op.top()]){
                string val2= val.top();
                val.pop();
                string val1= val.top();
                val.pop();
                char ch= op.top();
                op.pop();
                string result= val1 + val2+ ch;
                val.push(result);
            }
            op.push(ch);
        }
    }

    while(op.size() > 0){
                string val2= val.top();
                val.pop();
                string val1= val.top();
                val.pop();
                char ch= op.top();
                op.pop();
                string result= val1 + val2 + ch;
                val.push(result);
    }

    cout<< val.top();

    return 0;
}