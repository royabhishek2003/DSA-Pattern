#include<bits/stdc++.h>
using namespace std;
int main(){
    // 3 sum problem
    // return all the unique triplets that sum to zero
    vector<int> nums={2,-3,0,-2,-5,-5,-4,1,2,-2,2,0,2,-4,5,5,-10};
    sort(nums.begin(),nums.end());
    int n= nums.size();
    int i;
    for(i=0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            while( (j+1<n) && nums[j]==nums[j+1]) j++; // to handle duplicates
            while(k-1>i && nums[k]==nums[k-1]) k--; // to handle duplicates
            int target= 0- nums[i];
            if(nums[j]+nums[k]==target){
                cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
                j++;
                k--;
            }
            else if(nums[j]+nums[k]<target){
                j++;
            }
            else{
                k--;
            }
        }
    }
    return 0;
}