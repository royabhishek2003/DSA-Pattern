#include<bits/stdc++.h>
using namespace std;
int main(){
   // Array must be soerted for lower and upperbound function 

   vector<int> v={1,2,2,2,3,4,5,6};
    // int target=2;
    // int lb=lower_bound(v.begin(),v.end(),target)-v.begin(); // returns the index of first occurence of target or if not present then greater than target
    // int ub=upper_bound(v.begin(),v.end(),target)-v.begin(); // returns the index of first element greater than target
    // cout<<lb<<" "<<ub<<endl;
    // cout<<ub-lb<<endl; // to find the occurence of target element in the array

    // Time complexity of both functions is O(logn)
    // Space complexity is O(1)

    // if we have an query to find the number of elment in a range [a,b];
    // int a,b;
    // cout<<"Enter the range: ";
    // cin>>a>>b;
    // int lb= lower_bound(v.begin(),v.end(),a)-v.begin();
    // int ub=upper_bound(v.begin(),v.end(),b)-v.begin();
    // cout<<"The number of elements in the range is: "<<ub-lb<<endl;

    
    return 0;
}