#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={-2,-3,4,-1,-2,1,5,-3};
    int maxsum=INT_MIN;
    int sum=0;
    int n=arr.size();
    int start=0;
    int end=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>maxsum){
            maxsum=sum;
            end=i;
        }
        if(sum<0){
            sum=0;
            start=i+1;
        }
    }
    cout<<"maximum sum is: "<<maxsum<<endl;
    cout<<"the subarray is: ";
    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}