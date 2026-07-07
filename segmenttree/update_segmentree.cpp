#include<bits/stdc++.h>
using namespace std;

vector<int> arr= {1,3,5,7,9,11};
int n= arr.size();
vector<int> segmentTree(2*n,0);


// build segment tree for the problem of sum of elements in a range
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

// upadate query in segment tree for the problem of sum of elements in a range

void update(int idx, int value, int i, int low, int high){

    if(low == high){
        segmentTree[i]= value;
        return;
    }
    int mid = (low+high)/2;
    if(idx <= mid){
        update(idx,value,2*i+1,low,mid);
    }else{
        update(idx,value,2*i+2,mid+1,high);
    }
    segmentTree[i] = segmentTree[2*i+1] + segmentTree[2*i+2];
}
int main(){

    // buildSegmentTree(0,0,n-1);
    // for(int i=0;i<2*n;i++){
    //     cout<<segmentTree[i]<<" "; 
    // }
    // cout<<endl;

    // update(1,5,0,0,n-1);
    // return 0;

    cout << "Start\n";

    buildSegmentTree(0,0,n-1);

    cout << "Tree built\n";

    for (int x : segmentTree)
        cout << x << " ";

    cout << endl;

    update(1,5,0,0,n-1);

    cout << "Update done\n";
}