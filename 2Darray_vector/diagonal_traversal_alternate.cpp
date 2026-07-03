#include <bits/stdc++.h>
using namespace std;

int main() {
  // traversing the diagonal of a 2d array in alternatively 
  vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
  // we are gonna store the value of i+j as key and vector as value 
  int n=arr.size();
  
  unordered_map<int, vector<int>> m;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      m[i+j].push_back(arr[i][j]);
    }
  }
  vector<int> ans;
  for(auto &pair: m){
    if(pair.first%2!=0){
      for(int i=pair.second.size()-1;i>=0;i--){
        ans.push_back(pair.second[i]);
      }
    }
      else
        for(int &ele: pair.second) ans.push_back(ele);
  }
  reverse(ans.begin(), ans.end());
  for(int &ele: ans) cout<<ele<<" ";
  
    return 0;
}