#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,1,3,4,5,1,2,1,3,4,5,5};
    // sort(v.begin(),v.end(),[](int a, int b){
    //     return a>b;
    // });
    // for(int ele: v) cout<<ele<<" ";
    // cout<<endl;


    // suppose we want to sort the value in increasing frequency
    unordered_map<int, int> m;
    for(int ele: v) m[ele]++;
    sort(v.begin(),v.end(),[&](int a, int b){  // [&](capture clause) captures all varible in the surrounding scope by reference
        if(m[a]==m[b]) return a>b; // if frequency is same then put first with the geater value
        return m[a]<m[b];
    });
    for(int ele: v) cout<<ele<<" ";
    cout<<endl;
    return 0;
}