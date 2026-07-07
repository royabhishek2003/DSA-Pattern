#include<bits/stdc++.h>
using namespace std;

vector<int> arr= {1,3,5,7,9,11};
int n= arr.size();
vector<int> segmentTree(2*n,0);

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

int main(){

buildSegmentTree(0,0,n-1);

for(int i=0;i<2*n;i++){
    cout<<segmentTree[i]<<" "; 
}

}