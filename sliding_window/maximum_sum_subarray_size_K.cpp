
#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> arr={7,1,2,5,8,4,9,3,6};
    int k=3;
    // brute force approach
    // time complexity is O(n*k)
    // int n=arr.size();
    // int maxsum=INT_MIN;
    // for(int i=0;i<=n-k;i++){
    //     int sum=0;
    //     for(int j=i;j<=i+k-1;j++){
    //         sum+=arr[j];
    //     }
    //     if(sum>maxsum) maxsum=sum;
    // }
    // cout<<maxsum;
    
    // using sliding window approach 
    // time complexity is O(n);


    int n=arr.size();
    int maxsum=INT_MIN;
    int sum=0;
  for(int i=0;i<k;i++){
    sum+=arr[i];
  }
  int i=0;
  int j=k-1;
  while(j<n){
    sum-=arr[i];
    i++;
    j++;
    if(j<n)
    sum+=arr[j];
    if(maxsum<sum){
      maxsum=sum;
    }
  }
  cout<<maxsum;
  

    return 0;
}