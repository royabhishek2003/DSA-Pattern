#include<bits/stdc++.h>
using namespace std;
int main(){
    // we can add or substract power of two to number to make it zero
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int ans=0;
    while(n>0){
        if((n&1)==1){
            ans++;
            n=n>>1;
        if((n&1)==1) n++;
        }
        else{
            n=n>>1;
        }
    }
    cout<<"Minimum operations to reduce n to 0 is: "<<ans<<endl;
    return 0;
}