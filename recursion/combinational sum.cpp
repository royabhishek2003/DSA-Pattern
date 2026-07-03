#include<bits/stdc++.h>
using namespace std;

// combinational sum of given array of unique element  and given target ********
// we can take element infinitlt to get the sum
void combinational(vector<int> ans, vector<int> given, int target,vector<vector<int>> &mans, int index){
  if(target<0) return;
  if(target==0){
    mans.push_back(ans);
    return;
  }
  for(int i=index;i<given.size();i++){
    ans.push_back(given[i]);
    combinational(ans, given,target-given[i], mans,i);
    ans.pop_back();
  }
}

// combinational sum of a given array of repating element to a given target
// we can take element ones to get the sum
// combinational sum - II


 void combinational2(vector<int> ans, vector<int> given, int target, vector<vector<int>> &mans, int idx){
   if(target<0) return;
   if(target==0){
     mans.push_back(ans);
     return;
   }
   if(idx==given.size()) return;
   
  ans.push_back(given[idx]);
   combinational2(ans, given,target-given[idx], mans,idx+1);
   ans.pop_back();

   while(idx<given.size()-1 && given[idx]==given[idx+1]){
     idx++;
   }
    combinational2(ans, given,target, mans,idx+1);
 }
int main(){
  return 0;
}
