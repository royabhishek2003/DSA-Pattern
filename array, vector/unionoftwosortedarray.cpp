#include<bits/stdc++.h>
using namespace std;
// union of two sorted array having duplicates as well
// time complexity is O(n+m) and space complexity is O(1)
vector<int> union1(vector<int> &a, vector<int> &b){
    int n=a.size();
    int m=b.size();
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n && j<m){
        if(a[i]==b[j]){
            if(ans.size()==0 || ans[ans.size()-1]!=a[i])
            ans.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            if(ans.size()==0 || ans[ans.size()-1]!=a[i])
            ans.push_back(a[i]);
            i++;
        }
        else{
            if(ans.size()==0 || ans[ans.size()-1]!=b[j])
            ans.push_back(b[j]);
            j++;
        }
        if(i==n){
            while(j<m){
                if(ans.size()==0 || ans[ans.size()-1]!=b[j])
                ans.push_back(b[j]);
                j++;
            }
        }
        if(j==m){
            while(i<n){
                if(ans.size()==0 || ans[ans.size()-1]!=a[i])
                ans.push_back(a[i]);
                i++;
            }
        }
    }
    return ans;
}
// union of two unsorted array having duplicates as well 
vector<int> union2(vector<int> &a, vector<int> &b){
    // sort both the array for nlogn complexity 
    // or use set for n complexity and n space complexity
}
int main(){
    vector<int> a={3,2,4,1,2,2,3,5};
    vector<int> b={1,2,1,3,4,5,6,7};
    vector<int> ans=union1(a,b);
    for(auto i: ans){
        cout<<i<<" ";
    }

    return 0;
}