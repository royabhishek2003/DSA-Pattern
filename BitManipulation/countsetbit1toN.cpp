#include<bits/stdc++.h>
using namespace std;

// Dp approach (nlogn)
int cout1toN(int n){
    int total=0;
vector<int> dp(n+1);
for(int i=1;i<=n;i++){
    if(i%2==0) dp[i]=dp[i/2];
    else dp[i]=dp[i/2]+1;
    total+=dp[i];
}
return total;
}
int smallestmax(int n){
    return (int)floor(log2(n));
}

// observation (o(n))
int countsetbit(int n){
    if(n==0) return 0;
    int x= smallestmax(n);
    return x*(1<<(x-1))+(n-(1<<(x))+1)+ countsetbit(n-(1<<(x)));
}
int main(){
    cout<< cout1toN(12);

    return 0;
}







