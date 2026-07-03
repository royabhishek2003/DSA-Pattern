#include<bits/stdc++.h>
using namespace std;
// comparator function for sorting in ascending order
bool myComparator(int a, int b){
    return a>b; // for descending order
}
bool myComparator1(pair<int,int> a, pair<int, int> b){
    if(a.first==b.first){
        return a.second > a.first; // for ascending order of second if first are equal
    }
    return a.first>b.first; // for descending order of first
}

void print1(vector<int> &vec){
    for(int ele: vec){
        cout<<ele<<" ";
    }
    cout<<endl;
}
void print2(vector<pair<int, int>> &vec){
    for(auto ele: vec){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    cout<<endl;
}
// operator overloading for comparator function

class myComparator3{
    public:
    bool operator() ( const pair<int,int> a, const pair<int, int> b) const{
        if(a.first==b.first){
            return a.second> b.second;
        }
        return a.first<b.first;
    }
};
int main(){

    // vector<int> vec={1,4,3,2,5,6,9};
    // sort(vec.begin(), vec.end(), myComparator);
    // print1(vec);

    // vector<pair<int,int>> vec={{1,2},{3,4},{2,1},{5,0},{3,2}};
    // // sort(vec.begin(), vec.end());
    // sort(vec.begin(), vec.end(), myComparator1);
    // print2(vec);

    // operator overloading for comparator function
    vector<pair<int,int>> vec={{1,2},{3,4},{2,1},{5,0},{3,2}};

//  sort is a function, not a container.
// It cannot create a comparator object itself.
// You must give it an object.
// That's why we create an object of the comparator class and pass it to the sort function.
    sort(vec.begin(),vec.end(),myComparator3());   // functor

    print2(vec);

// if we use this comparator class in set or map then we don't need to create an object of the class.it automatically creates an object of the class.
    set<pair<int,int>, myComparator3> s;
    s.insert({1,2});
    s.insert({3,4});
    s.insert({2,1});
    s.insert({5,0});
    s.insert({3,2});
    for(auto ele: s){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    

    return 0;
}