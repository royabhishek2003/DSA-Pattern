#include <iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

// void show2(int* a,int n){
//   cout<<a[0]<<endl;
//   a[0]=100;
//   for(int i=0;i<n;i++){
//     cout<<a[i]<<" ";
//   }
//   cout<<endl;
// }


// void show(int a[],int x){ // here a is a pointer which have a addres of array arr
//   cout<<a[0]<<endl;
//   a[0]=200;               // a pointer has acces to change the array permanently
//   for(int i=0;i<x;i++){
//     cout<<a[i]<<" ";
//   }
// }


void change(vector <int> a){    // here a is different vector copy of vector v
  a[0]=100;
  for(int i=0;i<a.size();i++){
    cout<<a.at(i)<<" ";
  }
  cout<<endl;
  return ;
}

void change2(vector <int> &b){    // here a is a same vector poting vector v 
  b[0]=100;
  for(int i=0;i<b.size();i++){
    cout<<b.at(i)<<" ";
  }
  cout<<endl;
  return ;
}

int main() {

  // passing vector to a function
  vector <int> v;
  v.push_back(1);
  v.push_back(3);
  v.push_back(4);
  v.push_back(19);
  v.push_back(2);
  for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
  }
  cout<<endl;
  change(v); // pass by value each time vector is paased a new vector is created in memory
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  change2(v);   // pass by reference 
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  
 
//   vector  --> dynamically allocated array 
  
//   vector<int> v;  // need not to initialize with size
//                    if initialize without size then always pushback vector
  
// v.push_back(1);  // intitially size is 0 and it become 1 after push_back it is of full capcity
//   v.push_back(2); // size is 1 and it become 2 after push_back
//   v.push_back(1);  
//   v.push_back(8);    
//   v.push_back(9);  // here capacity is 4 initially and it becomes 8 after push back 
//   cout<<v.size()<<endl;  // vector provides size function
//   cout<<v.capacity()<<endl;  // vector provides capacity function
//   for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
//   }                // vactor v has size 5 and capacity 8


  //  v.push_back(1);
  //  v.push_back(2); 
  //  v.push_back(2);
  //  v.push_back(4);
  //  v.push_back(6);
  //  v.push_back(3);
  //  v.push_back(3);
  //  v.push_back(2);
  // v.push_back(10);
  // for(int i=0;i<v.size();i++){
  //   cout<<v[i]<<" ";
  // }
  // cout<<"\nsize of vector is: "<<v.size()<<endl;
  // cout<<"capacity of vector is: "<<v.capacity()<<endl;
  // v.pop_back();   // it just remove element from last doesn't effect capacity
  // v.pop_back();
  // cout<<"size of vector is: "<<v.size()<<endl;
  // cout<<"capacity of vector is: "<<v.capacity()<<endl;
  // for(int i=0;i<v.size();i++){
  //   cout<<v[i]<<" ";
  // }


  // vector initializing  with size 
  
  // vector <int> v1(3);   // vector v1 has size 3 and capacity 3 initially with all 0 element
  // cout<<v1.size()<<endl;
  // cout<<v1.capacity()<<endl;
  // for(int i=0;i<v1.size();i++){
  //   cout<<v1[i]<<" ";
  // }

  // vector <int> v2(5,3);  // vector v2 has size 5 and capacity 5 initially with all 3 element
  //  cout<<v2[0]<<" "<<v2[2];


  // vector input without initializing the size
  
  // vector <int> v;
  // int n;
  // cout<<"Enter the size of vector: ";
  // cin>>n;
  // for(int i=0;i<n;i++){
  //   int x;
  //   cin>>x;
  //   v.push_back(x);
  // }
  // for(int i=0;i<n;i++){
  //   cout<<v[i]<<" ";
  // }

  // use of  "(at) "  function to change or display the value of vector
  
  // vector <int> v;
  // v.push_back(2);
  // v.push_back(3);
  // v.push_back(4);
  // v.push_back(5);
  // cout<<v[3]<<endl;
  // cout<<v.at(3)<<endl;
  // v[3]=10;             // update the value at 3rd index in the vector
  // cout<<v.at(3)<<endl;
  // v.at(3)=12;       // update the value at 3rd index in the vector
  // cout<<v.at(3)<<endl;


  // use of sort function in vector

  // vector <int> v;
  // v.push_back(10);
  // v.push_back(3);
  // v.push_back(12);
  // v.push_back(5);

  // for(int i=0;i<4;i++){
  //   cout<<v.at(i)<<" ";
  // }
  // // sort  the vector 
  
  // sort(v.begin(), v.end());    // use header file <algorithm>
  // cout<<endl;
  // for(int i=0;i<v.size();i++){
  //   cout<<v.at(i)<<" ";
  // }
  
  // int n;
  // cout<<"Enter the size of array: ";
  // cin>>n;
  // int arr[n];
  // for(int i=0;i<n;i++){
  //   cin>>arr[i];
  // }
  // show2(arr,n);
  // show(arr,n);
  
  // pointr in array
  
  // int *ptr=arr;
  // int *p=arr;
  // cout<<ptr<<endl;
  // for(int i=0;i<n;i++){
  //   cout<<*ptr<<" ";
  //   ptr++;
  // }
  // cout<<endl<<p<<endl;


  // pointer has full accees to the array
  
  // int *ptr=arr;
  // cout<<ptr[0]<<endl;
  // ptr[0]=0;               // another way to acces the array with help of pointer
  // for(int i=0;i<n;i++){
  //   cout<<ptr[i]<<" ";
  // }

  

  return 0;
}

