#include<bits/stdc++.h>
using namespace std;    
 int nextnum(int n){
        int num=0;
        while(n>0){
            int rem=n%10;
            num+=rem*rem;
            n/=10;
        }
        return num;
    }
     bool isHappy(int n) {
        // using unorderedmap 

        // unordered_set<int> m;
        // while(n!=1){
        //     int temp=n;
        //     int num=0;
        //     while(temp>0){
        //         int rem=temp%10;
        //         num+=rem*rem;
        //         temp/=10;
        //     }
        //     if(m.find(num)!=m.end()){
        //         return false;
        //     }
        //     else m.insert(num);
        //     n=num;
        // }
        // return true;

        // using slow and fast pointer (Floyd's Cycle detection)
        
        int slow=n;
        int fast=n;
        while(true){
           slow=nextnum(slow);
           fast=nextnum(nextnum(fast));
            if(fast==1 || slow==1) return true;
            if(slow==fast) return false;
        }
        return false;
    }
int main(){
    return 0;
}