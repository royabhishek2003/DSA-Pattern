#include <bits/stdc++.h>
using namespace std;

class heap{
  public:
  int size;
  int capacity;
  vector<int> arr;
  heap(int n){
    capacity= n;
    arr.resize(n);
    size=0;
  }
  void insert(int ele){
    if(size== capacity){
      cout<<"Heap is overflow"<<endl;
      return;
    }
    // fill the element 
    
    int index = size;
    size++;
    arr[index]= ele;

    // check whether the heap property is satisfied or not 
    while( index > 0 && arr[(index-1)/2] < arr[index]){
      swap(arr[(index-1)/2], arr[index]);
      index= (index-1)/2;
    }
    
  }
  void print(){
    for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
  
  // heapify
  
  void heapify(int i){
    int largest= i;
    int left= 2*i+1;
    int right= 2*i+2;
    if(left<size && arr[largest]<arr[left]) largest= left;
    if(right< size && arr[largest] < arr[right]) largest= right;
    
    if(i!= largest){
      swap(arr[i], arr[largest]);
      heapify(largest);
    }
  }
  
  // deletion of element
  
void Delete() {
    
    // if(size ==0){
    //   cout<< "Heap is underflow"<<endl;
    //   return;
    // }
    // arr[0]= arr[size -1];
    // size --;
    // int i=0;
    // while(true){
    //   int left = 2*i+1;
    //   int right = 2*i+2;

    //   if(left>=size) break;  // none of the child is present
    //   int largest = left;
    //   if(right<size && arr[right] > arr[left]){
    //     largest= right;  // choose largest child 
    //   }

    //   if(arr[i]< arr[largest]){
    //     swap(arr[i], arr[largest]);
    //     i=largest;
    //   }
    //   else break;
    // }

    if(size==0){
      cout<<"Heap is underflow"<<endl;
      return;
    }
    arr[0]= arr[size-1];
    size--;
    heapify(0);  // take the 0th index to the right positin 
  }
};