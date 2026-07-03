#include<bits/stdc++.h>
using namespace std;
// function to checker weather a char is int or not 
bool isint(char ch){
        if(ch>='0' && ch<='9') return true;
        return false;
}
int main(){
  set<pair<pair<int, int>,int>> s;
  int source,destination,timestamp;
  cin>>source>>destination>>timestamp;
  s.insert({{source,destination},timestamp});
  cin>>source>>destination>>timestamp;
  if(s.find({{source,destination},timestamp})!=s.end()){
    cout<<"Found\n";
  }
  else cout<<"Not Found\n";
    return 0;
}