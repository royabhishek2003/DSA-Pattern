#include<iostream>
#include<math.h>
#include<climits>
using namespace std;

// void swap(int&a,int&b){     // usign pass by reference by aliase method
//   int temp=a;
//   a=b;
//   b=temp;

// }


// void swap(int* a,int* b){
//   int temp=*a;
//   *a=*b;
//   *b=temp;
  
// }

// printing the first and last number of a digit

// void Fstandlast(int* n){
//   int x;
//   int rem=*n%10;
//    x=rem;
 
//   while(*n>9){
//      *n=*n/10;
//   }
//     cout<<"First digit is: "<<*n<<endl;
//   cout<<"Last digit is: "<<x;
//   return ;
// }


  int main(){

    
   

    // finding any unique element present or not

    //  int n;
    //     cout<<"Enter the size of array: ";
    //     cin>>n;
    //     int arr[n];
    //     for(int i=0;i<n;i++){
    //       cin>>arr[i];
    //     }
    // for(int i=0;i<n;i++){
      
    //   for(int j=i+1;j<n;j++){
    //     if(arr[i]==arr[j]){
    //       arr[i]=arr[j]=-1;
    //     }
    //     }
    //   }
    // for(int i=0;i<n;i++){
    //   if(arr[i]!=-1){
    //     cout<<"Unique element is: "<<arr[i]<<endl;
    //   }
    // }
    

    // finding any duplicate found or not
    
// int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//       cin>>arr[i];
//     }
//     bool flag = false;
//     for(int i=0;i<n;i++){
//       for(int j=i+1;j<n;j++){
//         if(arr[i]==arr[j]){
//           flag = true;
//         }
//       }
//     }
//     if(flag){
//       cout<<"Duplicate found";
//     }
//     else
//       cout<<"None any duplicate";

    
    //rotate the array by k steps
    
    
    // int n;
    // cout<<"Enter the value of n: ";
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //   cin>>arr[i];
    // }
   
    // int k;
    // cout<<"Enter the value of k: ";
    // cin>>k;
    // k=k%n;
    // int i=0;
    // int j=n-1;
    // while(i<j){        //pehle pure arrray ko reverse
    //   int temp=arr[i];
    //   arr[i]=arr[j];
    //   arr[j]=temp;
    //   i++;
    //   j--;
    // }
    //  i=0;
    //  j=k-1;
    // while(i<j){          // fir kth element tak ko reverse karo
    //   int temp=arr[i];
    //   arr[i]=arr[j];
    //   arr[j]=temp;
    //   i++;
    //   j--;
    // }
    //  i=k;
    //  j=n-1;
    // while(i<j){        //   fir kth se last tak ko reverse karo
    //   int temp=arr[i];
    //   arr[i]=arr[j];
    //   arr[j]=temp;
    //   i++;
    //   k--;
    // }
    // for(int i=0;i<n;i++){
    //   cout<<arr[i]<<" ";
    // }
    
    

    // strore data of one array into another in reverse
    
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //   cin>>arr[i];
    // }
    // int brr[n];
    // for(int i=0;i<n;i++){
    //   brr[i]=arr[n-i-1];
    // }
    // for(int i=0;i<n;i++){
    //   cout<<brr[i]<<" ";
    // }

    // doublet whose sum is equal to given value
    
    // int n;
    // cout<<"Enter the size of array: ";
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //   cin>>arr[i];
    // }
    // int target;
    // cout<<"Enter targets sum: ";
    // cin>>target;
    // for(int i=0;i<n;i++){
    //   for(int j=i+1;j<n;j++){
    //     if(arr[i]+arr[j]==target){
    //       cout<<"("<<arr[i]<<","<<arr[j]<<")";
    //     }
    //   }
    // }


    // two pointer aproach for target sum problem for sorted array only
    
    // int n;
    // cout<<"Enter the size of array: ";
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //   cin>>arr[i];
    // }
    // int target;
    // cout<<"Enter targets sum: ";
    // cin>>target;
    // int i=0;
    // int j=n-1;
    // while(i<j){
    //   if(arr[i]+arr[j]==target){
    //     cout<<"("<<arr[i]<<","<<arr[j]<<")";
        
    //   }
    //   if(arr[i]+arr[j]<target){
    //     i++;
    //   }
    //   else
    //     j--;
      
    // }

    // finding last ocuurence of a array
    
// int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//       cin>>arr[i];
//     }
//     int x;
//     cin>>x;
   
//     for(int i=n-1;i>=0;i--){
//    if(arr[i]==x){
//      cout<<"The last index is: "<<i;
//      break;
//    }
      
//     }

    // inserion of number in array
    
   //  int n;
   //  cout<<"Enter the size of a array: ";
   //  cin>>n;
   //  int arr[n];
   //  for(int i=0;i<n;i++){
   //    cin>>arr[i];
   //  }
   // int inr;
   //  cout<<"Enter the inserting element: ";
   //  cin>>inr;
   //  int index;
   //  cout<<"Enter the index in which number is inserted: ";
   //  cin>>index;
   //  for(int i=n-1;i>=index;i--){
   //    arr[i+1]=arr[i];
   //  }
   //  arr[index]=inr;
   //  n++;
   //  cout<<"After inserting element in array: "<<endl;
   //  for(int i=0;i<n;i++){
   //    cout<<arr[i]<<" ";
   //  }
      
    // deletion of the array
    
   //  int n;
   //  cout<<"Enter the size of a array: ";
   //  cin>>n;
   //  int arr[n];
   //  for(int i=0;i<n;i++){
   //    cin>>arr[i];
   //  }
   //  int del;
   //  cout<<"Enter the deleted element: ";
   //  cin>>del;
   //  int index=0;
   // for(int i=0;i<n;i++){
   //   if(arr[i]==del){
   //     index=i;
   //   }
   // }
   //  for(int i=index;i<n;i++){
   //    arr[i]=arr[i+1];
   //  }
   //  n--;
   //  cout<<"Array after deleting the element is: "<<endl;
   //  for(int i=0;i<n;i++){
   //    cout<<arr[i]<<" ";
   //  }
    
     // finding maximum element in the array
    
    
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //   cin>>arr[i];
    // }
    // int max=INT_MIN;
    // for(int j=0;j<n;j++){
    //   if(max<arr[j]) max=arr[j];
    // }
    // cout<<"The maximum element ithe the array is: "<<max;


    // finding the secound maximum element in the array
    
    // int n;
    // cout<<"Enter the size of the array: ";
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //   cin>>arr[i];
    // }
    // int max=arr[0];
    // int max2=arr[0];
    // for(int i=0;i<n;i++){
    //   if(max<arr[i]) max=arr[i];
    // }
    // for(int i=0;i<n;i++){
    //   if(max2<arr[i] && arr[i]!=max)
    //     max2=arr[i];
    // }
    // cout<<max2;
    
    // memory allocation in array
    
    // int arr[9]={2,3,4,5,6,7,8};
    // for(int i=0;i<9;i++){
    //   cout<<&arr[i]<<endl;
    // }
    // cout<<&arr;  or  cout<<arr;   // dono hi array ki addres print karega
    
    
    
    //finding the length of array
    
   // int arr[]={2,3,4,1,2,3,4,5,6,7,8,1,0,9,8,7,6,5,4,3,2,1,0};
   //  cout<<sizeof(arr)<<endl;
   //  int length = sizeof(arr)/sizeof(arr[0]);
   //  cout<<"Length of array is: "<<length<<endl;
    
    
    // finding a binary value of a number
    
    // int n;
    // cout<<"Enter any decimal value: ";
    // cin>>n;
    // int x=n;
    // int a=1;
    // int ans=0;;
    // while(n!=0){
    //   int rem=n%2;
    //   ans+=rem*a;
    //   a=a*10;
    //   n/=2;
    // }
    // cout<<"The binary of "<<x<<" is: "<<ans;
    
    

    // to check weather a number is in fibbonachi or not
    
// int n;
    
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int n1=0;
//     int n2=1;
//     int n3;
//     int x=0;
//     if(n==0) cout<<"Yes";
//     else {
//     while(n2<=n){
//       if(n2==n ){
//         cout<<"Yes";
//         x=1;
//         break;
//       }
//       n3=n2+n1;
//       n1=n2;
//       n2=n3;
//     }
//     if(x==0){
//       cout<<"No";
//     }
//     }
   

  // Null pointer 
    
//     int* ptr1=NULL;  
//     int* ptr2=0;
//     //int* ptr3='\0';   --> null character hota ha ascii value 0 hoti ha
//     int* ptr4=nullptr;
// cout<<ptr1<<" "<<ptr2<<" "<<ptr4;   // 0 address reserve ho gya ha is pointer me


    // double pointer --> used to store address of a another pointer
    
    // int x=2;
    // int* p1=&x;
    // int** p2=&p1;
    // cout<<p1<<" "<<&x<<" "<<*p1<<" "<<&p1<<" "<<p2<<" "<<&p2<<" "<<*p2<<" "<<**p2;
   

  // int n;
  //   cout<<"Enter the value of n: ";
  //   cin>>n;
  //   Fstandlast(&n);
    
//  swaping by pass by reference
    
//     int a,b;
//     cin>>a>>b;
    // swap(&a,&b);
    // cout<<a<<" "<<b;

    // swaping by pass by reference by using aliase method  without using pointer variable 
    
   //  int a,b;
   //  cin>>a>>b;
   // swap(a,b);
   //  cout<<a<<" "<<b;
    
// int x=1;
//     int* p=&x;   // pointer p me x ka adress strore ho gya
//     cout<<p;       // p ki value print hogi jo ki x ka address ha
//     cout<<endl<<*p<<endl;  // p me jiska address ha uska value print hoga

//     cout<<&p;  // pointer pa ka khud ka bhi ek address hoga
    
    
  // int x;
  //   int* p=&x;
  //   cout<<"Enter the value of x: ";
  //   cin>>*p; // pointer ke through input le sakte hai
  //   cout<<x;

 //    int x,y;
 //    cin>>x>>y;
 //    int*   p1=&x ,p2=y;  // ek line me do pointer declare nai kar sakte hai
 // cout<<*p1<<p2;
    
// int* a,b;   a is a pointer variable but b is not a pointer variable

   
      
    return 0;
  }



















