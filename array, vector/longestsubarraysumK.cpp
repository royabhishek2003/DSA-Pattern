#include<bits/stdc++.h>
using namespace std;
int main(){
    // longest subarray with sum K 

    vector<int> v={1,2,3,1,1,1,1,4,2,6};
    int n=v.size();
    int k=3;
    // // approach 1-> generate all subarrays and check their sum
    // // time complexity is O(n^2) and space complexity is O(1)
    
    // int maxlength=INT_MIN;
    // vector<int> ans;// here instead of vector we can also store starting and ending index of the subarray
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     vector<int> temp;
    //     for(int j=i;j<n;j++){
    //         temp.push_back(v[j]);
    //         sum+=v[j];
    //         if(sum>k) break;
    //         if(sum==k){
    //            if(maxlength<j-i+1){
    //             maxlength=j-i+1;
    //             ans=temp;
    //            }
    //         }
    //     }
    // }
    // cout<<maxlength<<endl;
    // for(auto i: ans){
    //     cout<<i<<" ";
    // }

    // approach 2-> using unordered_map and prefix sum 
    // TC-> O(n*1) // in worst case O(n^2) if we have collision in unordered_map
    // unordered_map<int, int> mp; // to store the prefix sum and its index
    // int sum=0;
    // int maxlength=0;
    // for(int i=0;i<n;i++){
    //     sum+=v[i];
    //     if(sum==k){
    //         maxlength=max(maxlength,i+1);
    //     }
    //     if(mp.find(sum-k)!=mp.end()){ // check if sum-k is present before or not
    //         maxlength=max(maxlength,i-mp[sum-k]); 
    //     }
    //     if(mp.find(sum)==mp.end()){
    //         mp[sum]=i; // store only the first occurence of the prefix sum to get the maximum length subarray
    //     }
    // }
    // cout<<maxlength<<endl;

    // approach 3-> using sliding window (only for positive numbers)
    int i=0;
    int j=0;
    int sum=0;
    int maxlen=0;
    while(j<n){
        sum+=v[j];
       while(sum>k){
        sum-=v[i];
        i++;
       }
       if(sum==k){
        maxlen=max(maxlen,j-i+1);
       }
       j++;
    }
    cout<<maxlen<<endl;




    return 0;
}