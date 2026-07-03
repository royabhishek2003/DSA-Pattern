#include<iostream>
using namespace std;
int main(){

  cout<<"Hello World"<<endl;
// sum of first n natural numbers
  
 // int sum=0;
 //  int n;
 //  cin>>n;
 //  int i=0;
 //  while(i<=n){
 //    sum+=i;
 //    i++;
 //  }
 //  cout<<sum<<endl;

  // printing rectangular star
  
  // int n;
  // cin>>n;
  // int m;
  // cin>>m;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=m;j++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  // printing hollow rectangular star
  
  // int n,m;
  // cin>>n>>m;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=m;j++){
  //     if(i==1||i==n||j==1||j==m){
  //       cout<<"*";
  //     }
  //     else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<<endl;
  // }


  // printing half star triangle
  // int n;
  // cin>>n;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=i;j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }

  // printing half star triangle inverted
  // int n;
  // cin>>n;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=n-i+1;j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }

// printing the number triangle
  
  // int n,m;
  // cin>>n>>m;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=m;j++){
  //     cout<<j;
  //   }
  //   cout<<endl;
  // }

  // printing the star triangle inverted
  
  // int n;
  // cin>>n;
  // int nst=n;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=nst;j++){
  //     cout<<"*";
      
  //   }
  //   nst--;
  //   cout<<endl;
  // }

  // printing number trianle
  
  // int n;
  // cin>>n;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=i;j++){
  //     cout<<j;
  //   }
  //   cout<<endl;
  // }

  // inverted number triangle
  // int n;
  // cin>>n;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=(n+1-i);j++){
  //     cout<<j;
  //   }
  //   cout<<endl;
  // }


  // odd intiger ap in rectangle
  
  // int n;
  // cin>>n;
  // int m;
  // cin>>m;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=(2*m-1);j+=2){
  //     cout<<j;
  //   }
  //   cout<<endl;
  // }

  // odd integer ap in triangle
  
  // int n;
  // cin>>n;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=(2*i-1);j+=2){
  //     cout<<j;
  //   }
  //   cout<<endl;
  // }

  // printing star plus
  
  // int n;
  // cin>>n;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=n;j++){
  //     if(i==(n+1)/2 || j==(n+1)/2){
  //       cout<<"*";
  //     }
  //     else
  //       cout<<" ";
  //   }
  //   cout<<endl;
  // }

  //printing hollow triangle
  
  // int n;
  // cin>>n;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=i;j++){
  //     if(i==1 || i==j || i==n || j==1){
  //       cout<<"*";
  //     }
  //     else
  //       cout<<" ";
  //   }
  //   cout<<endl;
  // }


  
  // printing star cross
  
  // int n;
  // cout<<"Enter the value of n: ";
  // cin>>n;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=n;j++){
  //     if(i==j || j==(n+1-i) ){
  //       cout<<"*";
  //     }
  //     else
  //       cout<<" ";
  //   }
  //   cout<<endl;
  // }


  // floyeds triangle 
  
  // int n;
  // cin>>n;
  // int a=1;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=i;j++){
  //     cout<<a<<" ";
  //     a++;
  //   }
  //   cout<<endl;
  // }


  // odd digits floyeds triangle
  // int n;
  // cout<<"Enter the value of n: ";
  // cin>>n;
  // int a=1;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=i;j++){
  //     cout<<a<<" ";
  //     a+=2;
  //   }
  //   cout<<endl;
  // }

  // printing 0and 1 triangle
  
// int n;
//   cin>>n;
//   int a;
//   for(int i=1;i<=n;i++){
//     if(i%2!=0){
//       a=1;
//     }
//     else{
//       a=0;
//     }
//     for(int j=1;j<=i;j++){
     
//       cout<<a;
//       if(a==0)
//         a=1;
//       else
//         a=0;
//     }
    
//     cout<<endl;
//   }

  // printing 0and 1 triangle with another method
  
  // int n;
  // cin>>n;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=i;j++){
  //     if((i+j)%2==0){
  //       cout<<"1 ";
  //     }
  //     else
  //       cout<<"0 ";
  //   }
  //   cout<<endl;
  // }


  // to check weather a number is in desending order or not
  
// int n;
//   cin>>n;
//   int z=0;
//   int rem1=n%10;
//   n=n/10;
//   while(n!=0){
//     int rem2=n%10;
//     if(rem2>rem1){
//       z=1;
//       break;
//     }
//     rem1=rem2;
//     n=n/10;
//   }
//   if(z==0){
//     cout<<"Not in desending order";
//   }
//   else
//     cout<<"The number is in desending order";
  


  // stra triangle mast
// int n;
//   cout<<"Enter the value of n: ";
//   cin>>n;
  
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=(n-i);j++){
//       cout<<" ";
//     }
//     for(int k=1;k<=i;k++){
//       cout<<"*";
      
//     }
//     cout<<endl;
//   }

// printing rhoumbus
  
//  int n;
// cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=(n-i);j++){
//       cout<<" ";
//     }
//     for(int k=1;k<=n;k++){
//       printf("*");
//     }
//     cout<<endl;
//   }


  // printing the triangle
  
  // int n;
  //cout<<"Enter the value of n: ";
  // cin>>n;
  // int nsp=n-1;
  // int nst=1;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=nsp;j++){
  //     cout<<" ";
  //   }
  //   nsp--;
  //   for(int k=1;k<=nst;k++){
  //     cout<<"*";
  //   }
  //   nst+=2;
  //   cout<<endl;
  // }


  // printing the number triangle
  
  // int n;
  // cout<<"Enter the value of n: ";
  // cin>>n;
  // int nsp=n-1;
  // int nst=1;
  // for(int i=1;i<=n;i++){
  //   int a=1;
  //   for(int j=1;j<=nsp;j++){
  //     cout<<" ";
  //   }
  //   nsp--;
  //   for(int k=1;k<=nst;k++){
      
  //     cout<<a;
  //     a++;

  //   }
  //   nst+=2;
  //   cout<<endl;
  // }


  // number pyramid mast
  
  // int n;
  // cout<<"Enter the value of n: ";
  // cin>>n;
  // int nsp=n-1;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=nsp;j++){
  //     cout<<" ";
  //   }
  //   nsp--;
    
  //   for(int k=1;k<=i;k++){
  //     cout<<k;
  //   }
  //   int a=i-1;
  //   for(int l=1;l<=i-1;l++){
  //     cout<<a;
  //     a--;
  //   }
  //   cout<<endl;
  // }


  // printing diamond
  
  // int n;
  // cout<<"Enter the value of n: ";
  // cin>>n;
  // int nsp=(n-1)/2;
  // int ml=(n+1)/2;
  // int nst=1;
  // for(int i=1;i<=n;i++){
  //   for(int i=1;i<=nsp;i++){
  //     cout<<" ";
  //   }
  //   for(int k=1;k<=nst;k++){
  //     cout<<"*";
  //   }
  //   if(i<ml){
  //     nsp--;
  //     nst+=2;
  //   }
  //   else{
  //     nsp++;
  //     nst-=2;
  //   }
  //   cout<<endl;
  // }

  
// int n;
//   cout<<"Enter the value of n: ";
//   cin>>n;
//   for(int i=1;i<2*n;i++){
//     cout<<"*";
//   }
//   int nst1=n-1;
//   int nst2=n-1;
//   int nsp=1;
//   cout<<endl;
//   for(int k=1;k<=n;k++){
//   for(int j=1;j<=nst1;j++){
//     cout<<"*";
//   }
//     nst1--;
//     for(int l=1;l<=nsp;l++){
//       cout<<" ";
//     }
//     nsp+=2;
//     for(int m=1;m<=nst2;m++){
//       cout<<"*";
//     }
//     nst2--;
//     cout<<endl;
//   }

  
  //   int n;
  // cout<<"Enter the value of n: ";
  // cin>>n;
  // for(int i=1;i<(2*n);i++){
  //   cout<<i;
  // }
  // cout<<endl;
  // int nsp=1;
  // int nst1=n-1;
  // int nst2=n-1;
  // for(int j=1;j<=n;j++){
  //   int a=1;
  //   for(int k=1;k<=(nst1);k++){
  //     cout<<a;
  //     a++;
  //   }
  //   nst1--;
  //   for(int l=1;l<=nsp;l++){
  //     cout<<" ";
  //     a++;
  //   }
  //   nsp+=2;
  //   for(int m=1;m<=nst2;m++){
  //     cout<<a;
  //     a++;
  //   }
  //   nst2--;
  //   cout<<endl;
  // }


  
  // int n;
  // cout<<"Enter the value of n: ";
  // cin>>n;
  // int nsp=1;
  // int nst1=n-1;
  // int nst2=n-1;
  // for(int i=1;i<n;i++){
  //   cout<<i;
  // }
  // for(int j=n;j>0;j--){
  //   cout<<j;
  // }
  // cout<<endl;
  // for(int k=1;k<=n;k++){
  //   int a=1;
  //   for(int l=1;l<=nst1;l++){
  //     cout<<a;
  //     a++;
  //   }
  //   nst1--;
  //   for(int m=1;m<=nsp;m++){
  //     cout<<" ";
     
  //   }
  //   nsp+=2;
     
  //   for(int n=1;n<=nst2;n++){
  //     cout<<a;
  //     a--;
  //   }
  //   nst2--;
  //   cout<<endl;
  // }


  // numerical rectangular pattern
  
  // int n;
  // cout<<"Enter the value of n: ";
  // cin>>n;
  // for(int i=1;i<=n;i++){
  
    
  //   for(int j=i;j<=n;j++){
  //     cout<<j;
      
  //   }
  //   for(int k=1;k<=(i-1);k++){
  //     cout<<k;
  //   }
    
  //   cout<<endl;
  // }


  
  // int n;
  // cin>>n;
  // int m;
  // cin>>m;
  // int a;
  // for(int i=1;i<=m;i++){
  //   if(i%2==0){
  //     a=2;
  //   }
  //   else
  //     a=1;
  //   for(int j=1;j<=m;j++){
  //     cout<<a;
  //     if(a==1){
  //       a=2;
  //     }
  //     else 
  //       a=1;
  //   }
  //   cout<<endl;
  // }


  // int n;
  // cout<<"Enter the value of n: ";
  // cin>>n;
  // int nsp=n-1;
  
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=nsp;j++){
  //     cout<<" ";
  //   }
  //   nsp--;
  //   int a=1;
  //   for(int k=1;k<=i;k++){
  //     cout<<a;
  //     a++;
  //   }
    
  //   a-=2;
  //   for(int l=1;l<=(i-1);l++){
  //     cout<<a;
  //     a--;
  //   }
  //   cout<<endl;
  // }


  // printing alphabet diamond
  
 // int n;
 //  cout<<"Enter the value of n: ";
 //  cin>>n;
 //  int nsp=n-1;
 // int  ml=n;
 //  int nst=1;
 //  for(int i=1;i<=(2*n-1);i++){
 //    // int a=65; // ise bhi ho sakta ha
 //   char b='A';
 //    for(int j=1;j<=nsp;j++){
 //      cout<<" ";
 //    }
 //    for(int k=1;k<=nst;k++){
 //       //char b=int(a);    // isse bhi ho sakta ha 
 //      cout<<(b);
 //     b++;
 //    }
 //    if(i<ml){
 //      nsp--;
 //      nst+=2;
 //    }
 //    else{
 //      nsp++;
 //      nst-=2;
 //    }
 //    cout<<endl;
 //  }



  // printing star plus 
  
  // int n;
  // cout<<"Enter the value of n: ";
  // cin>>n;
  
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=n;j++){
  //     if(i==(n+1)/2 || j==(n+1)/2){
  //     cout<<"*";
  //     }
  //     else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<<endl;
  // }

  // printing the star rectangle
  
  // int n,m;
  // cout<<"Enter thhe number of rows: ";
  // cin>>n;
  // cout<<"Enter thhe number of columns: ";
  // cin>>m;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=m;j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }


  //printing triangle of even numbers
  
 //  int n;
 //  cout<<"Enter the value of n: ";
 //  cin>>n;
 //  int nsp=n-1;
 // int a=1;
 //  for(int i=1;i<=n;i++){
    
 //    for(int k=1;k<=nsp;k++){
 //      cout<<" ";
 //    }
 //    nsp--;
 //    for(int j=1;j<=i;j++){
 //      cout<<a<<" ";
 //      a+=2;
 //    }
 //    cout<<endl;
 //  }


  // printing a prime number triangle
   
  

 
  
  
  
  
  















 // number spiral    using the minimum of rows and colums concept


    
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=2*n-1;i++){
      
//       for(int j=1;j<=2*n-1;j++){
//        int a=i;
//         int b=j;
//         if(a>n){
//           a=n-a%n;
//         }
//         if(b>n){
//           b=n-b%n;
//         }
       
//        cout<<(n+1-min(a,b));
         
//       }
//       cout<<endl;
//     }
    

// // printing ulta v

//  int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int nsp1=n-1;
//     int nsp2=1;
//     int a1=1;
//     int a2=2;
//     for(int i=1;i<=n;i++){
//       for(int j=1;j<=nsp1;j++){
//         cout<<" ";
//       }
//       cout<<a1;
//       a1++;
//       nsp1--;
//     if(i!=1){
//       for(int k=1;k<=nsp2;k++){
//         cout<<" ";
//       }
//       nsp2+=2;
//     }
      
//      if(i!=1){
//        cout<<a2;
//        a2++;
//      }
      
//       cout<<endl;
//     }
    

//   // printing the hollow diamond


//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int nsp1=n-1;
//   int nsp2=1;
//     for(int i=1;i<2*n;i++){
//       for(int j=1;j<=nsp1;j++){
//         cout<<" ";
//       }
//       if(i<n){
//         nsp1--;
//       }
//       else
//         nsp1++;
//       cout<<"*";
//       if(i!=1){
//         for(int k=1;k<=nsp2;k++){
//           cout<<" ";
//         }
//         if(i<n){
//           nsp2+=2;
//         }
//         else{
//           nsp2-=2;
//         }
        
//       }
//      if(i!=1 && i!=2*n-1){
//        cout<<"*";
//      }
//       cout<<"\n";
//     }
    

//  // diamond boundary and middle pattern

//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int nsp1=n-1;
//     int nsp2=1;
//     int nsp3=1;
//     int ml=n;
//     for(int i=1;i<2*n;i++){
//       if(i==ml){
//         for(int l=1;l<=(2*n-4);l++){
//           cout<<"*";
//         }
//       }
//       for(int j=1;j<=nsp1;j++){
//         cout<<" ";
//       }
//       if(i<ml) 
//         nsp1--;
//       else 
//         nsp1++;
//       cout<<"*";
//       if(i==ml) {
//         nsp2--;
//       nsp3--;
//       }
//       if(i!=ml){
//       for(int k=3;k<=nsp2;k++){
//         cout<<" ";
//       }
//       if(i<ml){
//         nsp2++;
//       }
//       else
//         nsp2--;
//       }
      
//       if(i!=1 && i!=2*n-1){
//         cout<<"*";
//       }

//       if(i!=ml){
//         for(int m=3;m<=nsp3;m++){
//           cout<<" ";
//         }
//         if(i<ml){
//           nsp3++;
//         }
//         else
//           nsp3--;
//         }
//       if(i!=1 && i!=2*n-1){
//         cout<<"*";
//       }
//       cout<<"\n";
//     }


// // printing butterfly  problem

    
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int nst1=1;
//     int nsp=2*n-3;
//     int nst2=1;
//     for(int i=1;i<=2*n;i++){
//       for(int j=1;j<=nst1;j++){
//         cout<<"*";
//       }
//       if(i<n)
//         nst1++;
//         if(i==n+1){
//           nst1--;
//         }
//       else if(i>n+1)
//         nst1--;
//       for(int k=1;k<=nsp;k++){
//         cout<<" ";
//       }
//       if(i<n){
//         nsp-=2;
//       }
//         if(i==n+1){
//           nsp+=2;
//         }
//       else if(i>n+1)
//         nsp+=2;

//       for(int l=1;l<=nst2;l++){
//         cout<<"*";
//       }
//       if(i<n)
//         nst2++;
//         if(i==n-1){
//           nst2--;
//         }
//       else if(i>n+1)
//         nst2--;
      
//       cout<<"\n";
//     }
    

//  // hollow diamond under rectangle
    
//     int n;
//     cout<<"Entet the value of n: ";
//     cin>>n;
//     int nst1=n;
//     int nsp=1;
//     int nst2=n-1;
//     for(int i=1;i<=2*n-1;i++){
     
//       for(int j=1;j<=nst1;j++){
//         cout<<"*";
//       }
//       if(i<n)
//         nst1--;
//       else
//         nst1++;
      
//       if(i!=1 && i!=2*n-1){
//       for(int k=1;k<=nsp;k++){
//         cout<<" ";
//       }
//         if(i<n){
//           nsp+=2;
//         }
//         else
//           nsp-=2;
//     if(i!=1 && i!=2*n-1){
//       for(int l=1;l<=nst2;l++){
//         cout<<"*";
//       }
//       if(i<n){
//         nst2--;
//       }
//       else
//         nst2++;
//     }
        
        
//       }
//       if(i==1 || i==2*n-1){
//         for(int m=1;m<=n-1;m++){
//           cout<<"*";
//         }
//       }
//         cout<<"\n";
      
      
//     }




  
  return 0;
}