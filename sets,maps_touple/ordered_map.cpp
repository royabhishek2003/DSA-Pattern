#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> mp;
    mp.insert({2,4});
    mp.insert({1,5});
    mp.insert({2,2});
    for(auto it=mp.begin(); it!=mp.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    return 0;
}