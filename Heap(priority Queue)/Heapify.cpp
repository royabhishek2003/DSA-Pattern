#include<bits/stdc++.h>
using namespace std;


// building max heap from given array using heapifyy function 
void heapify(vector<int> &arr, int n, int i){
  int largest= i;
  int left= 2*i+1;
  int right= 2*i+2;
  if(left<n && arr[largest]<arr[left]) largest= left;
  if(right< n && arr[largest] < arr[right]) largest= right;
  
  if(i!= largest){
    swap(arr[i], arr[largest]);
    heapify(arr, n, largest);
  }
}

int main(){

  vector<int> arr= {10, 5, 3, 2, 4};
  int n= arr.size();

  for(int i= n/2-1; i>=0; i--){
    heapify(arr, n, i);
  }

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }


  return 0;

}