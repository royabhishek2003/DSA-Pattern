#include<bits/stdc++.h>
using namespace std;
// to chek string is palindrome or not using recursion

 bool chek2(string str, int i, int j){
   if(i>j) return true;
   if(str[i]!=str[j]) return false;
   else 
     return chek2(str, i+1, j-1);
 }

// to find the hcf of two  numbers using recusrsion
// a*b=hcf(a,b)*lcm(a,b)

int hcf(int a, int b){
  if(a==0) return b;
  return hcf(b%a,a);
}

// generate all binary string of length n wihout consecutive 1

void generatebinary(string ans, int n,vector<string> &mans){
  if(ans.length()==n){
    mans.push_back(ans);
    return;
  }
  generatebinary(ans+'0', n, mans);
  if(ans.length()==0 ||  ans[ans.length()-1]!='1')
  generatebinary(ans+'1', n , mans);
}

int main(){
  return 0;
}

