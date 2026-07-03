#include<bits/stdc++.h>
using namespace std;

// print the subset of given string 

void subset(string ans, string ori){
  if(ori.length()==0) {
    cout<<ans<<endl;
    return;
  }
  subset(ans+ori[0],ori.substr(1));
  subset(ans, ori.substr(1));
}


//  print the subset of given string using index

void subset2(string ans, string ori,  int i){
  if(i==ori.length()) {
    cout<<ans<<endl;
    return;
  }
  subset2(ans+ori[i],ori,i+1);
  subset2(ans,ori,i+1);
}

// to store the subset of a given string in a vector string 

void subset3(string ans, string ori,  int i, vector<string> &v){
  if(i==ori.length()) {
    v.push_back(ans);
    return;
  }
    subset3(ans+ori[i],ori,i+1,v);
    subset3(ans,ori,i+1,v);
}


// to store  the subset of a given vector in 2d vector  

void subset4(vector<int> ori, int i, vector<int> ans,vector<vector<int>> &a){
  if(i==ori.size()){
    a.push_back(ans);
    return;
  }
  subset4(ori, i+1, ans,a);
  ans.push_back(ori[i]);
  subset4(ori, i+1,ans,a);
}


// to store the non-repeating subset of a repeating given string in a vector string using flag 

void subset5(string ans, string ori, int i, vector<string> &mans, bool flag){
  if(i==ori.length()){
    mans.push_back(ans);
    return;
  }

  if(ori.length()==1){
    if(flag==true)  subset5(ans,ori,i+1,mans, true);
     subset5(ans+ori[i], ori, i+1,mans,true);
  }
  else if(ori[i]==ori[i+1]){
    if(flag==true)  subset5(ans,ori,i+1,mans, true);
     subset5(ans+ori[i], ori, i+1,mans,false);
  }
  else{
    if(flag==true)  subset5(ans,ori,i+1,mans, true);
     subset5(ans+ori[i], ori, i+1,mans,true);
  }
}

//   to store the non-repeating subset of a repeating given string in a vector string

void helper(vector<int> ans, vector<int> & nums,int i,vector<vector<int>> &mans){
    if(i==nums.size()){
        mans.push_back(ans);
        return;
    }
   ans.push_back(nums[i]);
   helper(ans, nums, i+1,mans);
   ans.pop_back();
  
  while( i<nums.size()-1 &&nums[i]==nums[i+1]) i++;
  helper(ans, nums, i+1,mans);
}

// to store the non-repeating subset of a repating given array in a 2d vector

void subset6(vector<int> ans, vector<int> & ori, int i, vector<vector<int>> &mans, bool flag){
  if(i==ori.size()){
    mans.push_back(ans);
    return;
  }
  if(ori.size()==1){
    if(flag==true)  subset6(ans,  ori, i+1,mans,true);
      ans.push_back(ori[i]);
    subset6(ans,  ori, i+1,mans,true);
  }
  else if(ori[i]==ori[i+1]){
    if(flag==true)  subset6(ans,  ori, i+1,mans,true);
      ans.push_back(ori[i]);
    subset6(ans,  ori, i+1,mans,false);
  }
  else{
    if(flag==true)  subset6(ans,  ori, i+1,mans,true);
      ans.push_back(ori[i]);
    subset6(ans,  ori, i+1,mans,true);
  }
}

// store all the increaing sequence of k to a given n natural number


void sequence(vector<int> &given, int k, vector<int> ans, int i, vector<vector<int>> &mans){
  if(i==given.size()){
    if(ans.size()==k) mans.push_back(ans);
    return;
  }
  if(ans.size() + given.size()-i < k) return; 
  // agar ans + remaining vector size < k toh it is impossible to create a sequence of k length
  sequence(given,k,ans,i+1,mans);
  ans.push_back(given[i]);
  sequence(given,k,ans,i+1,mans);
}

// permutation string 

void permutation(string ans, string ori, vector<string> &mans){
  if(ori==""){
    mans.push_back(ans);
    return;
  }
  for(int i=0;i<ori.length();i++){
    permutation(ans+ori[i],ori.substr(0,i)+ori.substr(i+1), mans);
  }
}


// permutation of  a vector  using backtracking 

void permutation2(vector<int> ans, vector<int> ori, vector<vector<int>> & mans){
  if(ori.size()==0){
    mans.push_back(ans);
    return;
  }
  for(int i=0;i<ori.size();i++){
    vector<int> a=ori;
    ans.push_back(a[i]);
   a.erase(a.begin()+i);
    permutation2(ans, a, mans);
    ans.pop_back();
  }
}

// printing  subaarays of the array  iterative aaproach

void subarray(vector<int> v){
  for(int i=0;i<v.size();i++){
    for(int j=i;j<v.size();j++){
      for(int k=i;k<=j;k++){  // very important to use <= / difficult to understand
        cout<<v[k]<<" ";
      }
      cout<<endl;
    }
  }
}


// storing  subaarays of the array 

void subarray2(vector<int> ans, vector<int> given, int i, vector<vector<int>> &mans){
  if(i==given.size()){
    mans.push_back(ans);
    return;
  }
  subarray2(ans, given, i+1, mans);
  if(ans.size()==0){
    ans.push_back(given[i]);
    subarray2(ans, given, i+1, mans);
  }
   else if(ans[ans.size()-1]==given[i-1]){
    ans.push_back(given[i]);
    subarray2(ans, given, i+1, mans);
   }
}
int main(){
  return 0;
}


