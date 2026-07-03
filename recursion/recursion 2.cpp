// remove all occurences of a from a string 
#include<bits/stdc++.h>
using namespace std;

void removechar(string ans, string ori, int i){
    if(i== ori.length()) {
        cout<<ans;
    return;
    }
    if(ori[i]=='a') {
        removechar(ans,ori,i+1);
    }
    else{
        ans+=ori[i];
        removechar(ans,ori,i+1);
    }
    
}


// tower of hanoi 

void hanoi(int n, char s,char h, char d){
    if(n==0) return;
    // n-1 disk ko a to b
    hanoi(n-1,s,d,h);
    // biigest disk a to c pe jayega
    cout<<s<<" -> "<<d<<endl;
    // n-1 disk ko b to c
    hanoi(n-1,h,s,d);
}


// dislay the array through recusrsion 

void display( int arr[], int n, int i){
   if(i==n) return;
    cout<<arr[i++]<<" ";
    display( arr,n,i);
}

// display the maxumum value of a array using recursion

void maxdisplay(int arr[], int n , int i, int ans){
    if(i==n) {
        cout<<ans;
        return;
    }
    if(ans<arr[i]) ans=arr[i];
    maxdisplay(arr,n,i+1,ans);
}


// to return the maximum value of a array using recursion 

int maxvalue(int arr[], int n, int i){
    if(i==n) return INT_MIN;
    return max(arr[i], maxvalue(arr, n,i+1));
}

int main(){
    return 0;
}