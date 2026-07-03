#include<bits/stdc++.h>
using namespace std;
int solve(int n){
    int x= floor(log2(n));
    x+=1;
    return (1<<x)-n;
}
int main(){
    int n;
    cout<<"Enter the value of n ladlee:";
    cin>>n;
    cout<<solve(n);
    
    return 0;
}