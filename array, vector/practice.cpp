#include<bits/stdc++.h>
using namespace std;
long long maxproduct(vector<int> temp){
    int n= temp.size();
    sort(temp.begin(),temp.end());
    long long res1= 1LL*temp[n-1]*temp[n-2]*temp[n-3];
    long long res2=1LL*temp[0]*temp[1]*temp[n-1];
    return max(res1,res2);
}
int main(){
vector<int> nums={-5,7,0};
int maxval=100000;
int minval=-100000;
vector<int> temp1=nums;
temp1.push_back(maxval);
long long res1= maxproduct(temp1);
vector<int> temp2=nums;
temp2.push_back(minval);
long long res2= maxproduct(temp2);
cout<< max(res1,res2);
}