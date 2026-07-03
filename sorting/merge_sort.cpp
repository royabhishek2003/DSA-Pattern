#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& v1, vector<int> &v2, vector<int> &v){
  int n1=v1.size();
  int n2=v2.size();
  int i=0;
  int j=0;
  int k=0;
  while(i<n1 && j< n2){
    if(v1[i]<=v2[j]) v[k++]= v1[i++];
    else v[k++]=v2[j++];
  }
  if(i==n1){
    while(j<n2) v[k++]= v2[j++];
  }
  else{
    while(i<n1) v[k++]= v1[i++];
  }
}
void mergesort(vector<int>& v){
  int n= v.size();
  if(n<=1) return;
  int n1= n/2;
  int n2= n-n1;
  vector<int>v1(n1);
  vector<int>v2(n2);
  for(int i=0;i<n1;i++) v1[i]=v[i];
  for(int i=0;i<n2;i++) v2[i]=v[n1+i];

  mergesort(v1);
  mergesort(v2);

  merge(v1,v2,v);
}
int main(){

  vector<int> v={3,4,2,5,6,7,8};
  mergesort(v);

  for(int ele: v) cout<<ele<<" ";
  return 0;
}
