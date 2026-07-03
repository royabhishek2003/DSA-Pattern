#include<bits/stdc++.h>
using namespace std;
   //  prefix sum 
   
   //array can be partinining in two parts or not 
  int main(){
  vector<int> v={1,2,3,1,3,4,5,1,2,1,3,4,5,5};
  int n= v.size();
  // calculating prefix array 
  for(int i=1;i<n;i++){
    v[i]+=v[i-1];
  }
  int x=-1;
  bool chek=false;
  for(int i=0;i<n;i++){
    if(2*v[i]==v[n-1]){
      chek=true;
      x=i;
      break;
    }
  }
  if(chek) cout<<"vector can be partioned into two parts " <<x<<endl;
  else cout<<"No";
  }
  
   