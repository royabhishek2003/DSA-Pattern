
#include<bits/stdc++.h>
using namespace std;
int main(){
// pair class(STL)


  // pair<int, int> p; // pair class 
  // p.first=10;
  // p.second=30;
  // cout<<p.first<<endl;
  // cout<<p.second<<endl;
  
  
 unordered_map<string ,int> mp;
 
 // map me sirf pair insert hota hai 
 
 pair<string, int> p1;
 p1.first="raghav";
 p1.second= 12;
  pair<string, int> p2;
 p2.first="abhishek";
 p2.second= 21;
  pair<string, int> p3;
 p3.first="harshu";
 p3.second= 16;
 mp.insert(p1);
 mp.insert(p2);
 mp.insert(p3);
 
 // inserting pair into map directly without craeting the pair 
 mp["shruti"]=45;
 mp["ananya"]=34;
 
 
 // printing the map
 
// for(pair<string, int> p: mp){
//   cout<<p.first<<"->"<<p.second<<endl;
// }
 
 // printing by using auto keyword 
 
 for(auto p: mp){
   cout<<p.first<<" "<<p.second<<endl;
 }
 cout<<endl<<endl;
 // erasing the pair in map 
 mp.erase("ananya");
 mp.erase("abhishek");
 for(auto p: mp){
   cout<<p.first<<" "<<p.second<<endl;
 }
 
 cout<<mp.size();


 
// insert all the character of string into the <char, int> map 

unordered_map<char, int> m;
string s="anagram";
for(int i=0;i<s.length();i++){
  m[s[i]]++;   // this means agar s[i] nahi ha map me toh dal do with freaquence 1 aur ha to udate the freaquence by 1
  
}
}