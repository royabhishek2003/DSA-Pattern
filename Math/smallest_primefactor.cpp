#include<bits/stdc++.h>
using namespace std;
int main(){
    // Query Based problem 
    // smallest prime factor of every number from 1 to n
    int n;
    cout<<"Enter the number of queries: ";
    cin>>n;
    vector<int> spf(n+1);
    for(int i=0;i<=n;i++){
        spf[i]=i;  // initially spf of every number is the number itself 
    }
    for(int i=2;i*i<=n;i++){    
        if(spf[i]==i){ // i is prime
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j){ // j has not been marked yet
                    spf[j]=i;  // mark i as the smallest prime factor of j
                }
            }
        }
    }
    // for(int i=0;i<=n;i++){
    //     cout<<i<<" "<<spf[i]<<endl;
    // }

    // Now with the help of spf array we can find the prime factorization of any number in O(log n) time
    int num;
    cout<<"Enter the number to find its prime factorization: ";
    cin>>num;
    vector<int> primefactors;
    while(num!=1){
        primefactors.push_back(spf[num]);
        num=num/spf[num];
    }
    for(auto x: primefactors) cout<<x<<" ";
    return 0;
}