#include<iostream>
#include<math.h>
using namespace std;
// void sqr(int n){
//   for(int i=1;i<=n;i++){
//     cout<<pow(i,2)<<"\n";
//   }
// }

  // void odd(int a, int b){
  //   for(int i=a;i<=b;i++){
  //     if(i%2!=0){
  //       cout<<i<<",";
  //     } 
  // }
  //   }

//     void prime(int a,int b){
      
//       for(int i=a;i<=b;i++){
//         int x=0;
//         if(i==1){
//           x=1;
//         }
//         for(int j=2;j<=(i/2);j++){
          
//           if(i%j==0 ){
//              x=1;
//             break;
//           }
//         }
//         if(x==0){
//           cout<<i<<",";
//         }
//       }

    
    
// }


  int main(){
    // print squares of the first 5 natural numbers.
    // int n;
    // cin>>n;
    // void sqr(int);
    // sqr(n);

    // Given two numbers a and b,  functions to print all the odd numbers between them.
    // int a,b;
    // cin>>a>>b;
    // void odd(int, int);
    // odd(a,b);

    //Given two numbers a and b, print all the prime numbers present between a and b.
    
  //   int a,b;
  //   cout<<"Enter the value of a and b: ";
  //   cin>>a>>b;
  //   void prime(int ,int);
  // prime(a,b);


    // print the banry value of any number
    
  //  int n;
  //   cin>>n;
  //   int ans=0;
  //   int a=1;
  //   while(n!=0){
  //     int rem=n&1;
  //     ans+=rem*a;
  //     a=a*10;
  //    n= n>>1;
  //   }
  //   cout<<ans;
  //   return 0;
  // }


// 
// counting the number of words  in a string 

int countword(string str){
  int count=0;
  int word=0;
  for(int i=0;i<str.length();i++){
    if(str[i]!=' '){
      if(word==0) count++;
         word++;
    }
    else
      word=0;
  }
  return count;
}



