#include<bits/stdc++.h>
using namespace std;

// building max index segment Tree 
vector<int> segmentTree;

void buildSegmentTree(int i, int low, int high, vector<int>& arr){
    if(low==high){
        segmentTree[i]=low;
        return;
    }
    int mid=(low+high)/2;
    buildSegmentTree(2*i+1,low,mid,arr);
    buildSegmentTree(2*i+2,mid+1,high,arr);
    int leftIndex=segmentTree[2*i+1];
    int rightIndex=segmentTree[2*i+2];
    if(arr[leftIndex]>arr[rightIndex]){
        segmentTree[i]=leftIndex;
    }else{
        segmentTree[i]=rightIndex;
    }
}

int searchMaxIndex(int i, int low, int high, int l, int r, vector<int>& arr){
    if(low>r || high<l){ // out of range
        return -1;
    }
    if(low>=l && high<=r){  // completly inside the range 
        return segmentTree[i];
    }
    int mid=(low+high)/2;
    int leftIndex=searchMaxIndex(2*i+1,low,mid,l,r,arr);
    int rightIndex=searchMaxIndex(2*i+2,mid+1,high,l,r,arr);
    if(leftIndex==-1) return rightIndex;
    if(rightIndex==-1) return leftIndex;
    if(arr[leftIndex]>arr[rightIndex]){
        return leftIndex;
    }else{
        return rightIndex;
    }
}
int main(){

    vector<int> arr= {6,4,8,5,2,7};
    int n= arr.size();
    segmentTree.resize(4*n,0);
    buildSegmentTree(0,0,n-1,arr);
    return 0;
}