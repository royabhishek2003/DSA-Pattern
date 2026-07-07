#include<bits/stdc++.h>
using namespace std;

vector<int> arr= {1,3,5,7,9,11};
int n= arr.size();
vector<int> segmentTree(4*n,0);
vector<int> lazy(4*n,0);

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

void range_update(int i, int low, int high, int l, int r, int value){
    if(lazy[i]!=0){
        segmentTree[i]+=(high-low+1)*lazy[i];
        if(low!=high){
            lazy[2*i+1]+=lazy[i];
            lazy[2*i+2]+=lazy[i];
        }
        lazy[i]=0;
    }

    if(low>r || high<l){
        return;
    }
    if(low>=l && high<=r){
        segmentTree[i]+=(high-low+1)*value;
        if(low!=high){
            lazy[2*i+1]+=value;
            lazy[2*i+2]+=value;
        }
        return;
    }
    int mid=(low+high)/2;
    range_update(2*i+1,low,mid,l,r,value);
    range_update(2*i+2,mid+1,high,l,r,value);
    segmentTree[i]=segmentTree[2*i+1]+segmentTree[2*i+2];
    
}


int main(){
    buildSegmentTree(0,0,n-1);
    range_update(0,0,n-1,1,3,10);
    return 0;
}