#include<bits/stdc++.h>
using namespace std;
 bool solve(int n){
        if(n==1) return true;
        if( n<1 ||n%3!=0 ) return false;
        return solve(n/3);
    }
int main(){
    int n;
    cin>>n;
      // approach -1 (recursive or iterative)
       // TC-> O(log3n)
    //    return solve(n);
       // approach 2
    //    if(n<1) return false;
    //   double x=log10(n)/log10(3);
    //   return (x==(int)x);
     
     // approach 3
     if(n<1) return false;
    int num=pow(3,19);
    if(num%n==0) return true;
     return false;
    return 0;

}