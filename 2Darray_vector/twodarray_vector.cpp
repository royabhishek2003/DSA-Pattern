#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

    // finding the transpose of a matrix

//     int n,m;
//     cin>>n>>m;
//   int arr[n][m];
//   for(int i=0;i<n;i++){
//       for(int j=0;j<m;j++){
//           cin>>arr[i][j];
//       }
//   }

// printing the matrix in transpose order

// for(int j=0;j<m;j++){
//     for(int i=0;i<n;i++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }

 // store the transpose of matrix into the another one
//  int brr[m][n];
//  for(int i=0;i<m;i++){
//      for(int j=0;j<n;j++){
//          brr[i][j]=arr[j][i];
//          }
//  }
 
//  for(int i=0;i<m;i++){
//      for(int j=0;j<n;j++){
//          cout<<brr[i][j]<<" ";
//          }
//          cout<<endl;
//  }


    
   // finding the transpose of a matrix

//     int n,m;
//     cin>>n>>m;

//   int arr[n][m];
//   for(int i=0;i<n;i++){
//       for(int j=0;j<m;j++){
//           cin>>arr[i][j];
//       }
//   }

// //    change the array to its transpose only for sqare matrix


// for(int i=0;i<n;i++){
//     for(int j=i+1;j<m;j++){
//             int temp=arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp;
//     }
// }
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }

  // spiral matrix 
  
    int n,m;
    cout<<"Enter the value of n and m: ";
    cin>>n>>m;
  int arr[n][m];
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          cin>>arr[i][j];
      }
  }

//    print the array in spiral form 

for(int i=0;i<n;i++){
    if(i%2==0){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";
        }
    }
    else{
        for(int j=m-1;j>=0;j--){
            cout<<arr[j][i]<<" ";
        }
    }
}



return 0;
}

