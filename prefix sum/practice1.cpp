#include<bits/stdc++.h>
using namespace std;
vector<int> seive(int n){
        vector<bool>prime(n+1,true);
        prime[0]=false;
        prime[1]=false;
        for(int i=2;i<=n;i++){
            if(prime[i]){
                for(int j=i*i;j<=n;j+=i){
                    prime[j]=false;
            }
            }
        }
        vector<int> ans;
        for(int i=2;i<=n;i++){
            if(prime[i]) ans.push_back(i);
        }
        return ans;
    }
int main(){

    return 0;
}