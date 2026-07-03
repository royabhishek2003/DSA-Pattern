#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="abcdefgh";
    int k=4;
    // int len=str.length();
    // k=k%len; // in case k is greater than length of string
    // reverse(str.begin(),str.begin()+k);
    // reverse(str.begin()+k,str.end());
    // reverse(str.begin(),str.end());

    // cout<<str<<" "<<endl;

    rotate(str.begin(),str.begin()+k,str.end());// left rotate by k steps (begin, new_begin, end) 
   
    return 0;
}