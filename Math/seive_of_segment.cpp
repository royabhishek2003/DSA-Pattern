#include<bits/stdc++.h>
using namespace std;

vector<int> seive(int n){
    vector<bool> prime(n+1, true);
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
    vector<int> ans;
    for(int i=0;i<=n;i++){
        if(prime[i]) ans.push_back(i);
    }
    return ans;
}

int main(){
    // Time Complexity is (R-L+1)*log(log(sqrt(R))) insetaed of R*log(log(R))
    // used for the large numbers in range 
    long long L,R;
    cin>>L>>R;
    int limit=sqrt(R)+1;
    vector<int> prime=seive(limit);
    vector<bool> isprime(R-L+1, true);
    for(int p: prime){
        // finding the minimum number in [L,R] that is a multiple of p
       long long start = max(1LL*(p * p), (long long)((L + p - 1) / p) * p);
       for(long long j=start;j<=R;j+=p){
        isprime[j-L]=false;
       }
    }
    if(L==1) isprime[0]=false;
    for(int i=0;i<=R-L;i++){
        if(isprime[i]) cout<<i+L<<" ";
    }
    return 0;
}