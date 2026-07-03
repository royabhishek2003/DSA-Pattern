#include<bits/stdc++.h>
using namespace std;
 // program for the prime number
 // time complexity is O(sqrt(n))
 
// bool isprime(int n){
//     if(n==1) return false;
//     if(n==2) return true;
//     if(n%2==0) return false;
//     for(int i=3;i*i<=n;i+=2){
//         if(n%i==0) return false;
//     }
//     return true;
//       }

// program for the calculating POW(X,N) using binary exponentialtion 
// time complexity is O(log b)
// space complexity is O(log b)

// double solve(double a, long long b){
//     if(b==0) return 1;
//     double half=solve(a,b/2);
//     double  result=half*half;
//     if(b%2==1){
//         result=result*a;
//     }
//     return result;
// }

// findig factors of a number 

vector<int> factors(int n){
    vector<int> ans;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            ans.push_back(i);
            if((n/i)!=i){
                ans.push_back(n/i);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}



int main(){
  
   // Inbuilt function to find the next permutation of a number

//    vector<int> arr={1,2,3};
//    while(next_permutation(arr.begin(),arr.end())){
//     for(auto x:arr){
//         cout<<x<<" ";
//     }
//     cout<<endl;
//    }

// Erase function to delete a part of array or a single element ina array 

    vector<int> ar={1,2,3,4,5};
    // ar.erase(ar.begin()+2);  // delete elemnt at index 2
    // for(auto x:ar){
    //     cout<<x<<" ";
    // }
    // ar.erase(ar.begin()+1,ar.begin()+4);
    // for(int &ele: ar){
    //     cout<<ele<<" "; //
    // }

    // Next Permutation function
    // works for string as well 
//    next_permutation(ar.begin(),ar.end());
//    for(int ele: ar) cout<<ele<<" ";

// reverse(ar.begin()+2,ar.end());
// for(int ele: ar) cout<<ele<<" ";

cout<<-10%7;
    
    

return 0;

}
