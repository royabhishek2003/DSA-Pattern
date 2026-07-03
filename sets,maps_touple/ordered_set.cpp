#include<bits/stdc++.h>
using namespace std;
int main(){
    // Ordered_set 
    // it is implemented using balanced BST
    // it is not present in STL
    // it is present in gnu pbds
    // it is same as set but it supports some extra functionalities

//    set<int> s;

//     s.insert(5);
//     s.insert(2);
//     s.insert(7);
//     s.insert(5); // duplicate ignored
//     // sorted in ascending order
//     cout << "Set size: " << s.size() << endl;


    // for(int x : s) {
    //     cout << x << " ";
    // }

//     for (auto it = s.begin(); it != s.end(); ++it) {
//     cout << *it << " ";  // dereference iterator to get value
// }
//  cout << endl;

 // Accesing the first and last element directly 
//  cout << "First: " << *s.begin() << endl;   // smallest
//  cout << "Last: " << *s.rbegin() << endl;   // largest
//  cout<< endl;

// set having datatype as pair 
//     set<pair<int,int>> sp;
//     sp.insert({1,2});
//     sp.insert({3,4});
//     sp.insert({1,3});
//     sp.insert({1,2}); // duplicate ignored
//     cout << "Set of pairs size: " << sp.size() << endl;
//     for (auto it = sp.begin(); it != sp.end(); ++it) {
//     cout << "(" << it->first << ", " << it->second << ") ";
// }
//  cout << endl;


// set<vector<int>> s;
// s.insert({1,2,3});
// s.insert({1,2,3});
// s.insert({3,4,5});
// s.insert({3,2,1});
// for(auto it=s.begin(); it!=s.end();it++){
//    for(int ele: *it) cout<<ele<<" ";
//    cout<<endl;
// }

// ordered_set is implemented throught red black tree 

    return 0;
}