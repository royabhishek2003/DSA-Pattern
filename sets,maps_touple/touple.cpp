#include<bits/stdc++.h>
using namespace std;
int main(){
    tuple<int, string,int> t={1,"abc",3};
    cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<endl;

    // Creation of tuple 
    tuple<int, int, int> t1(1,2,3);
    tuple<int, string, double> t2(1,"abc",3.4);

    // creation of empty tuple
    tuple<int, string, double> t3;
    t3=make_tuple(1,"abc",3.4);
    auto t4=make_tuple(1,"abc",3.4); // c++14 feature
    // modify the tuple
    get<0>(t3)=4;
    cout<<get<0>(t3)<<" "<<get<1>(t4);

    // Tuples can be compared lexicographically (like pair):
    tuple<int,int,int> a = {1,2,3};
    tuple<int,int,int> b = {1,2,4};

    if (a < b) cout << "a is smaller\n"; // true

    //You can use tuple inside set, map, priority_queue, etc.
    set<tuple<int,int,int>> s;

    s.insert({5, 1, 100}); // price=5, shop=1, movie=100
    s.insert({3, 2, 200}); // price=3, shop=2, movie=200

    for (auto x : s) {
        cout << get<0>(x) << " " << get<1>(x) << " " << get<2>(x) << endl;
    }
    // delete the value of touple 
    s.erase({3,2,200});
    

    return 0;
}