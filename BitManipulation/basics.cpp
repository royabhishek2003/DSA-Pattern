#include<bits/stdc++.h>
using namespace std;
    
// convert binary to decimal 

int binaryToDecimal(string &s){
    int n=s.length();
    int ans=0;
    int x=1;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1'){
            ans+=x;
        }
        x*=2;
    }
    return ans;
}

// convert decimal to binary 
string decimalToBinary(int n){
    string ans="";
    while(n>0){
        int rem=n%2;
        ans+=to_string(rem);
        n/=2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

// counting set bits in a number 
// using Brian Kernighan's algorithm
int countSetBits(int n){
    return __builtin_popcount(n); // this is a built-in function in GCC and Clang
    // int count=0;
    // while(n>0){
    //     n=n&(n-1); // this operation reduces the number of set bits by 1
    //     count++;
    // }
    // return count;
}


// maximum power of 2 that is smaller then n 
int maxpower(int n){
  int x=0;
  while((1<<x)<=n){
    x++;
  }
  return 1<<(x-1);
}
// using brian kernighan's algorithm for finding number which is power of 2 less then n
int maxpowerof2(int n){
    int temp=0;
    while(n!=0){
        temp=n;
        n=n&(n-1);
    }
    return temp;
}
// finding number which is power of 2 less then n
int maxpowerlessthen2(int n){
    n=n|n>>1;
    n=n|n>>2;
    n=n|n>>4;
    n=n|n>>8;
    n=n|n>>16;
    return (n+1)>>1;
}

// flips all bits of a number 
int flipBits(int n){
    // return ~n; // this will not work for negative numbers as it will return a signed integer
    int m=n;
    n=n|n>>1;
    n=n|n>>2;
    n=n|n>>4;
    n=n|n>>8;
    n=n|n>>16;
    return m^n; // XOR with the number gives the flipped bits
}

// minimum bit flip to convert a to b
// count set bits in a^b
int minBitFlip(int a, int b){
    int c=a^b; // XOR gives the bits that are different
    return countSetBits(c);
}
int main(){
    int n=1;
    int temp=floor(log2(n));
        cout<<(temp+1);
    return 0;
}