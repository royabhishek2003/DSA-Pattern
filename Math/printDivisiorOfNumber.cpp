#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> ans;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            ans.push_back(i);
            if(i!=n/i) ans.push_back(n/i); // to avoid duplicate when i*i=n
        }
    }

    sort(ans.begin(),ans.end());
    for(auto x: ans) cout<<x<<" ";
    return 0;
}