#include<bits/stdc++.h>
using namespace std;

 // for finding LPS array 
 
vector<int> computelpsarray(string s){
   
    vector<int> lps(s.length(),0);
        lps[0]=0;
        int pref=0;
        int suff=1;
        while(suff<s.length()){
            if(s[pref]==s[suff]){
                lps[suff]=pref+1;
                suff++;
                pref++;
            }
            else{
                if(pref==0){
                    lps[suff]=0;
                    suff++;
                }
                else{
                pref=lps[pref-1];
                }
            }
        }
return lps;      
}
int main(){
   
   // KMP algorithm 
   string heystick="abcdef";
   string needle="cde";
   vector<int> lps=computelpsarray(needle);
    vector<int> ans;
   int first=0;
   int second=0;
   while(first<heystick.length() && second<needle.length()){
    if(heystick[first]==needle[second]){
        first++;
        second++;
        if(second==needle.length()){
        ans.push_back(first-second);
        second=lps[second-1];
    }
    }
    else if(second==0) first++;
    else second=lps[second-1];
}
  



    return 0;
}