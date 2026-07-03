#include<bits/stdc++.h>
using namespace std;
// power function having complexity log(n) in both
// also called binary exponentiation/ fast exponentiation
const long long mod=1e9+7;
long long power(long long a, long long b){
    if (b == 0) return 1;          // base case
    if (b == 1) return a;          // base case
    long long half =power(a,b/2);
    long long result=(half*half)%mod;
    if(b%2==0)
    return result;
    else
     return (result*a)%mod;
}
int main(){
    // cout<<power(2,10)<<endl;

    // Calculating inverse of 10! mod 10e9+7 using fermat's little theorem
    // long long fact=1;
    // for(int i=1;i<=10;i++){
    //     fact=fact*i;
    // }
    // cout<<power(fact,mod-2)%mod<<endl;

    // calculating of nCr mod 10e9+7 using fermat's little theorem
    int n;
    int r;
    cout<<"Enter n and r"<<endl;
    cin>>n>>r;
    long long fn=1;
    long long fr=1;
    long long fnr=1;
    for(int i=1;i<=n;i++){
        fn=(fn*i)%mod;
        if(i==r) fr=fn;
        if(i==n-r) fnr=fn;
    }
    long long a=power(fr,mod-2);
    long long b=power(fnr,mod-2);
    cout<< (((fn*a)%mod)*b)%mod;

    return 0;
}