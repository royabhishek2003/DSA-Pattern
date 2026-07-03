#include <iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

void revpart(vector <int> &v,int a,int b){
  
  while(a<b){
    int temp=v[a];
    v[a]=v[b];
    v[b]=temp;
    a++;
    b--;
  }
  return ;
}

void display(vector<int> &v){
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
}

void twopass(vector<int> &v){
  int noz=0;
  int noo=0;
  for(int i=0;i<v.size();i++){
          if(v[i]==0) noz++;
          else noo++;
  }
  for(int i=0;i<v.size();i++){
           if(i<noz) v[i]=0;
            else  v[i]=1;
  }
  
  return ;
}

void twopass2(vector<int> &v){
  int n=v.size();
  int noz=0;
  int no1=0;
  //int no2=0;
  for(int i=0;i<n;i++){
    if(v[i]==0) noz++;
    else if(v[i]==1) no1++;
    //else no2++;
  }
  for(int i=0;i<n;i++){
    if(i<noz) v[i]=0;
    else if( i<noz+no1) v[i]=1;
    else v[i]=2;
  }
  return;
}

vector<int> mergesort(vector<int> &v1, vector<int> &v2){     
  int n=v1.size();
  int m=v2.size();
  vector <int> v3(n+m);
  int i=0;
  int j=0;
  int k=0;
  while(i<n && j<m){
    if(v1[i]<v2[j]){
      v3[k]=v1[i];
      i++;
    }
    else {
      v3[k]=v2[j];
      j++;
    }
    k++;
  }
  if(i==n){
    while(j<m){
      v3[k]=v2[j];
      j++;
      k++;
    }
  }
  else {
    while(i<n){
      v3[k]=v1[i];
      i++;
      k++;
    }
  }
  return v3;
  
}

vector<int> mergesort2(vector<int> &v1, vector<int>&v2){  // ulte traverse krenge array
  int n=v1.size();
  int m=v2.size();
  vector<int> v3(n+m);
  int i=n-1;
  int j=m-1;
  int k=(n+m)-1;
  while(i>=0 && j>=0){
    if(v1[i]>v2[j]){
      v3[k]=v1[i];
      k--;
      i--;
    }
    else {
      v3[k]=v2[j];
      j--;
      k--;
    }
  }
      if(i<0){   // 1st array khatam ho chuka ha 
    while(j>=0){
      v3[k]=v2[j];
      j--;
      k--;
    }
      }
  else{
    while(i>=0){           
    v3[k]=v1[i];
    i--;
    k--;
  }               
  }
  return v3;
}

vector<int> nextpermutation(vector<int> &v1){
  // finding pivot element 
  int n=v1.size();
  int pivot=-1;
  for(int i=n-2;i>=0;i--){
    if(v1[i]<v1[i+1]){
      pivot=i;
      break;
    }
  }
  
    if(pivot!=-1){
      // reverse element after pivot element
      reverse(v1.begin()+pivot+1,v1.end());
      // finding element just greater then pivot element
      int j=-1;
      for(int i=pivot+1;i<n;i++){
        if(v1[i]>v1[pivot]){
          j=i;
          break;
        }
      }
      // swap pivit to that element e=which is just greater then that pivot element
    int temp=v1[pivot];
    v1[pivot]=v1[j];
    v1[j]=temp;
    }
    else{
      reverse(v1.begin(),v1.end());
      
    }
  return v1;
}
                                                           
int main() {

  
  // finding the previous greatest element array
  
  // vector<int> v1={0,1,2,3,4,5,6,7,8,9,2,3};
  // vector <int> arr(v1.size());
  //   arr[0]=-1;
  // int max=v1[0];
  // for(int i=1;i<v1.size();i++){
  //   arr[i]=max;
  //   if(max<v1[i]) max=v1[i];
  // }
  // for(int i=0;i<v1.size();i++){
  //   cout<<arr[i]<<" ";
  // }
  
// finding the next greatest element array
  
  // vector<int> v1={0,1,2,3,4,5,6,7,8,9,2,3};
  // vector<int> v2(v1.size());
  // v2[v1.size()-1]=-1;
  // int max=v1[v1.size()-1];
  // for(int i=v1.size()-2;i>=0;i--){
  //   v2[i]=max;
  //   if(max<v1[i]) max=v1[i];
  // }
  // for(int i=0;i<v2.size();i++){
  //   cout<<v2[i]<<" ";
  // }
  
  // finidng next permutation of array

  //  int n;
  //   cout<<"Enter the size of 1st array: ";
  //   cin>>n;
  //   vector<int> v1;
  //   for(int i=0;i<n;i++){
  //   int x;
  //     cin>>x;
  //     v1.push_back(x);
  //   }
  // vector <int> v = nextpermutation(v1);
  // display(v);

  // merge two sorted arrays
  
 //  int n;
 //  cout<<"Enter the size of 1st array: ";
 //  cin>>n;
 //  vector<int> v1;
 //  for(int i=0;i<n;i++){
 //  int x;
 //    cin>>x;
 //    v1.push_back(x);
 //  }
  
 //  int m;
 //  cout<<"Enter the size of 2nd array: ";
 //  cin>>m;
 //  vector<int> v2(n+m);
 //  for(int i=0;i<m;i++){
 //    cin>>v2[i];
   
 //  }
 // for(int i=0;i<m;i++){
 //   cout<<v2[i]<<" ";
 // }
  // vector<int> v = mergesort(v1,v2);
      //vector<int> v=mergesort2(v1,v2);
// display(v);
  
 

 

  // sort the array of 0's ,1's and 2's
  
  // vector<int> v{0,1,2,0,1,2,1,0,2,1,2,0,1,2};
  
  // twopass2(v);  // to sort 0,1,2 4 by two time traversal in array (two pass method)
  // display(v);

  // by three pointer (dutch flag method)
  
  // int n=v.size();
  // int low=0;
  // int mid=0;
  // int high=n-1;
  // while(mid<high){
  //   if(v[mid]==2){
  //     v[mid]=v[high];
  //     v[high]=2;
  //     high--;
  //   }
  //   else if(v[mid]==0){
  //     v[mid]=v[low];
  //     v[low]=0;
  //     mid++;
  //     low++;
  //   }
  //   else mid++;
  // }
  // display(v);

  // move all negative to the last and positive to the beginning
  // this can be done by two paas method also
  
  //  vector<int> v={-12,11,-13,-5,6,-7,5,-3,-6,5};
  // int n=v.size();
  // int i=0;
  // int j=n-1;
  // while(i<j){
  //   if(v[i]>0) i++;
  //   if(v[j]<0) j--;
  //   if(v[i]<0 && v[j]>0 && i<j){
  //     int temp=v[i];
  //     v[i]=v[j];
  //     v[j]=temp;
  //   }
  // }
  // display(v);
  

 //  sorting of array of 0's and 1's by two pointer approach
 
  // int n;
  // cout<<"Enter the size of array: ";
  // cin>>n;
  // vector<int> v;
  // for(int i=0;i<n;i++){
  //   int x;
  //   cin>>x;
  //   v.push_back(x);
  // }
  // int i=0;
  // int j=n-1;                                              
  // while(i<j){     
   
  //   if(v[i]==0)
  //     i++;
  //   if(v[j]==1)
  //     j--;
  //   if(v[i]==1 && v[j]==0 && i<j){   // here loop i<j ke baad bhi swap ho ja rha tha isliye ek aur condition lana pada 
  //     v[i]=0;
  //     v[j]=1;
  //     i++;
  //     j--;
  //   }
    
  // }
  // display(v);


 // finding max of 3 elements in the array
 
  // vector<int> v;
  // int n;
  // cout<<"Enter the size of array: ";
  // cin>>n;
  // for(int i=0;i<n;i++){
  //   int x;
  //   cin>>x;
  //   v.push_back(x);
  // }
  // int max1=v[0]; 
  // int max2=v[0];  
  // int max3=v[0];
  // for(int i=0;i<n;i++){
  //   if(v[i]>max1){
  //     max1=v[i];
  //   }
  // }
  // for(int i=0;i<n;i++){
  //   if(v[i]>max2 && v[i]<max1){
  //     max2=v[i];
  //   }
  // }
  // for(int i=0;i<n;i++){
  //   if(v[i]>max3 && v[i]<max2){
  //     max3=v[i];
  //   }
  // }
  // cout<<max1<<" "<<max2<<" "<<max3;

  // finding max of 3 elements in the array by one array traversal only
  

  
  

  // sorting of array of 0's and 1's  by two paas method 
  
// vector <int> v;
//   int n;
//   cout<<"Enter the size of array: ";
//   cin>>n;
//   for(int i=0;i<n;i++){
//     int x;
//     cin>>x;
//     v.push_back(x);
//   }
//   twopass(v);
//   display(v); 
  
  // rotate the array by k times by using reverse function

  // int n;
  // cout<<"Enter the size of array: ";
  // cin>>n;
  // vector<int> v;
  // for(int i=0;i<n;i++){
  //   int x;
  //   cin>>x;
  //   v.push_back(x);
  // }
  // int k;
  // cout<<"Enter the no. of element rotated: ";
  // cin>>k;
  // reverse(v.begin(),v.end()-k);
  // reverse(v.begin()+n-k,v.end());
  // reverse(v.begin(),v.end());
  // for(int i=0;i<n;i++){         
  //   cout<<v[i]<<" ";              
  // }
  
 

//  rotate the array  // pehle k tak rotate fir last mai rotate  karo fir sare ko rotate karo
  
  // int n;
  // cout<<"Enter the size of array: ";
  // cin>>n;
  // vector<int> v;
  // for(int i=0;i<n;i++){
  //   int x;
  //   cin>>x;
  //   v.push_back(x);
  // }
  
  //reverse(v.begin(),v.end());         // inbuit dunction in vector to reverse the array
  
  // int k;
  // cout<<"Enter no. of rotated elements: ";
  // cin>>k;
  // display(v);
  // cout<<endl;  
  // if(k>n) k=k%n;
   
  // revpart(v,0,n-k-1);
  // revpart(v,n-k,n-1);
  // revpart(v,0,n-1); 
  // display(v);

 
  
  // finding last occurence of x in a vector           
                                                                                 
  // int n;
  // cout<<"Enter the size of vector: ";
  // cin>>n;
  // int x;
  // cout<<"Enter the element to be searched: ";
  // cin>>x;
  // vector<int> v;
  // cout<<"Enter the elements of vector: ";
  // for(int i=0;i<n;i++){
  //   int y;
  //   cin>>y;
  //   v.push_back(y);                            
  // }
  // int ans=0;
  // for(int i=n-1;i>=0;i--){
  //   if(v[i]==x){
  //     ans=i+1;
  //     break;
  //   }
  // }
  // if(ans==0){
  //   cout<<"The element is not present in the vector";
  // }
  // else{
  // cout<<"The last occurence position of "<<x<<" is "<<ans;
  // }
  
// to find the target sum  without sorted arrray
  
  // int target;
  // cout<<"Enter target: ";
  // cin>>target;
  // int n;
  // cout<<"Enter the array size: ";
  // cin>>n;
  // vector<int> v;
  // for(int i=0;i<n;i++){
  //   int a;
  //   cin>>a;
  //   v.push_back(a);
  // }
  // for(int i=0;i<v.size();i++){
  //   for(int j=i+1;j<v.size()-1;j++){
  //     if(v[i]+v[j]==target)
  //       cout<<"("<<(i+1)<<" "<<(j+1)<<")"<<endl;
  //   }
  // }

  // copy the content of one array to the another;
  
  // int n;
  // cout<<"Enter the size of array: ";
  // cin>>n;
  // vector<int> v1;
  // for(int i=0;i<n;i++){
  //   int x;
  //   cin>>x;
  //   v1.push_back(x);
  // }
  // // logic 1 
  
  //  vector<int> v2;
  // for(int i=n-1;i>=0;i--){
  //   v2.push_back(v1[i]);
  // }
  
  // // logic 2;
  // // vector <int> v2(n);
  // // for(int i=0;i<n;i++){
  // //   v2[i]=v1[n-1-i];
  // // }
  
  // for(int i=0;i<v2.size();i++){
  //   cout<<v2[i]<<" ";
  // }

  // reverse the array without making extra array
  
  // int n;
  // cout<<"Enter the size of array: ";
  // cin>>n;
  // cout<<"Enter the array: ";
  // vector<int>v(n);
  // for(int i=0;i<n;i++){
  //   cin>>v[i];
  // }
  // int i=0;
  // int j=n-1;
  // while(i<j){
  //   //swap(v[i],v[j]);   // by using swap function
  //   int temp=v[i];
  //   v[i]=v[j];
  //   v[j]=temp;
  //   i++;
  //   j--;
  // }
  // for(int k=0;k<n;k++){
  //   cout<<v[k]<<" ";
  // }


 

  
  
  return 0;
}