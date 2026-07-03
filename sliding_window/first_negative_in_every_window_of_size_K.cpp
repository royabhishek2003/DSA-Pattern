#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={2,-3,4,4,-7,-1,4,-2,6};
    int k=2;
    int n= arr.size();
    // Brute Force TC->O(n*k)
    // vector<int> ans;
    // for(int i=0;i<=n-k;i++){
    //     bool found =false;
    //     for(int j=i;j<i+k;j++){
    //         if(arr[j]<0){
    //             found=true;
    //             ans.push_back(arr[j]);
    //             break;
    //         }
    //     }   
    //     if(!found) ans.push_back(0);
    // }
    // for(int ele: ans) cout<<ele<<" ";

    // using sliding window concept and queue 
    // TC->O(n)
    int i=0;
    int j=0;
    queue<int> q;
    vector<int>ans;
    while(j<n){
       if(arr[j]<0) q.push(arr[j]);
      if(j-i+1 == k){
        if(q.size()!=0)
          ans.push_back(q.front());
          else ans.push_back(0);
          if(arr[i]<0) q.pop();
       i++;
       j++;
      }
      else j++;
    }
    for(int ele: ans) cout<<ele<<" ";
    return 0;
}