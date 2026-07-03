#include<bits/stdc++.h>
using namespace std;
void moveZeros(vector<int> &nums){
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=1;j<n-i;j++){
            if(nums[j-1]==0 && nums[j]!=0){
                swap(nums[j-1],nums[j]);
                flag=true;
            }
        }
        if(!flag) break;
    }
}
int main(){
   // one approach is using bubble sort
//    vector<int> v={3,5,0,1,0,3};
//    // relative order should be maintained
//    moveZeros(v);
//    for(int ele: v) cout<<ele<<" ";
//     return 0;

    // Better approach Two pointer approach 
    vector<int> v1={1,0,1};
    int n=v1.size();
    int j=0; // pointer for non zero element
    for(int i=0;i<n;i++){
        if(v1[i]!=0){
            swap(v1[i],v1[j]);
            j++;
        }
    }
    for(int ele: v1) cout<<ele<<" ";

}