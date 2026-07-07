#include <bits/stdc++.h>
using namespace std;


vector<int> arr= {1,3,5,7,9,11};
int n= arr.size();
vector<int> segmentTree(2*n,0);
// Building segment Tree
void buildSegmentTree(int i, int low, int high){
    if(low==high){
        segmentTree[i]=arr[low];
        return;
    }
    int mid=(low+high)/2;
    buildSegmentTree(2*i+1,low,mid);
    buildSegmentTree(2*i+2,mid+1,high);
    segmentTree[i]=segmentTree[2*i+1]+segmentTree[2*i+2];
}

// query function to get the sum of elements in a given range


// here low and high -> the range of the current node
// l and r -> the range of the query
int query(int i, int low, int high, int l, int r){
    if(low>r || high<l){  // completly outside the range
        return 0;
    }
    else if( l>= low && r<=high){  // completely inside the range
        return segmentTree[i];
    }
    else{  // partially inside and partially outside
        int mid=(low+high)/2;
        int left=query(2*i+1,low,mid,l,r);
        int right=query(2*i+2,mid+1,high,l,r);
        return left+right;
    }
}
int main(){
    buildSegmentTree(0,0,n-1);
    return 0;
}