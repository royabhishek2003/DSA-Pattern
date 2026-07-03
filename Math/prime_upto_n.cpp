#include<bits/stdc++.h>
using namespace std;
int main(){
    // we have to print all the prime number from 1 to n
    // using Tc-> O(n*log(log n))
    int n;
    cout<<"Enter the value of n ladle: ";
    cin>>n;
    vector<bool> prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(prime[i]){ // mark false to the factor of this prime
            for(int j=i*i;j<=n;j+=i){ // j=i*i(eg i=7 then 7*2,7*3,7*4 are already marked by 2,3,4)
                prime[j]=false;
            }

        }
    }
    for(int i=0;i<=n;i++){
        if(prime[i]) cout<<i<<" ";
    }
    return 0;

}