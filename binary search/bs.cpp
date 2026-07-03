#include<bits/stdc++.h>
using namespace std;
int main(){
    // binary search implementation
    vector<int> arr={1,2,3,4,5,6,7,8,9};
    int target=5;
    int left=0;
    int right=arr.size()-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target){
            cout<<"Element found at index: "<<mid<<endl;
            break;
        }
        else if(arr[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return 0;
}