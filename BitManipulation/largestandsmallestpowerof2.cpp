#include<bits/stdc++.h>
using namespace std;
int largestpowoftwo(int n){
  // int x=floor(log2(n));
  // return 1<<x;
  
//   int x=1;
//   while((1<<x)<=n){
//     x++;
//   }
//   return (1<<(x-1));

    // int temp=0;
    // while(n!=0){
    //     temp=n;
    //     n=n&(n-1);
    // }
    // return temp;

    // using bitwise or operator
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);
    n=n|(n>>16);
    return (n+1)>>1;
}

int smallestpowoftwo(int n){
  return n & (-n);
  
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
cout<< largestpowoftwo(n);
cout<<endl<<smallestpowoftwo(n);

    return 0;
}