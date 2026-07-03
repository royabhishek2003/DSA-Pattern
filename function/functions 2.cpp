#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

// factorial using recursion

// int fact(int n){
//   if(n==0) return 1;
//   return n*fact(n-1);
// }

// int gcd(int a,int b){
//   if(a==0){
//     return b;
//   }
//   else if(b==0){
//     return a;
//   }
//   int x=1;
//    for(int i=min(a,b);i>=1;i--){
//      if(a%i==0 && b%i==0){
//        x=i;
//        break;
//      }
//    }
//  return x;
// } 

// int fact(int x){
//   if(x==0) return 1;
//   int a=1;
//   for(int i=1;i<=x;i++){
//     a=a*i;
//   }
//   return a;
// }

// int comb(int n, int r){
//   return fact(n)/(fact(r)*fact(n-r));
// }

// void fun(int x=2,float y=4){  // defalt value of arguments (sabko default value deni jaruri ha nahi toh kisi ko nhi do)
//   cout<<x<<" "<<y;
// }

  int main(){

// printing pascals triangle
    
    // int n;
    // cout<<"Enter the value of n: ";
    // cin>>n;
    // int nsp=n-1;
    // for(int i=0;i<=n;i++){
    //   for(int k=0;k<=nsp;k++){
    //     cout<<" ";
    //   }
    //   nsp--;
    //   for(int j=0;j<=i;j++){
    //     cout<<comb(i,j)<<" ";
    //   }
    //   cout<<endl;
    // }


    // pascals triangle in optimised way
    
    // int n;
    // cout<<"Enter the value of n: ";
    // cin>>n;
    // int nsp=n;
    // for(int i=0;i<=n;i++){
    //   for(int k=1;k<=nsp;k++){
    //     cout<<" ";
    //   }
    //   nsp--;
    //   int initial=1;     // initial every row has one
    //   for(int j=0;j<=i;j++){
    //     cout<<initial<<" ";  
    //     initial=initial*(i-j)/(j+1);         // iC(j+1)=iCj * (i-j)/(j+1)
    //   }
    //   cout<<endl;
    // }
    
    // print the factorial of 1st n natural number
    
    // int n;
    // cin>>n;
    // int fact=1;
    // for(int i=1;i<=n;i++){
    //   fact=fact*i;
    //   cout<<fact<<endl;
    // }
   
    
      
    // factorial of first n numbers
    
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //   cout<<fact(i)<<endl;
    // }

    // findingn gcd of two numbers using euclide algorithms



    

    // finding gcd of two numbers 
    
  // int a,b;
  //   cin>>a>>b;
  // cout<<gcd(a,b);

    
    // coombination problem
    
    // int n;
    // cout<<"Enter the value of n: ";
    // cin>>n;
    // int r;
    // cout<<"Enter the value of n: ";
    // cin>>r;
    // cout<<comb(n,r);

    // swapping of two numbers
    
    // int a,b;
    // cin>>a>>b;
    // int temp=a;
    // a=b;
    // b=temp;
    // cout<<a<<" "<<b;

    // swapping the two numbers without third variable
    
    // int a,b;
    // cin>>a>>b;
    // a=a+b;
    // b=a-b;
    // a=a-b;
    // cout<<a<<" "<<b;

    
    



































































    
    
  
    return 0;
  }



















