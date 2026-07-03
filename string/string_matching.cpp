#include<bits/stdc++.h>
using namespace std;
int main(){

    // Buitin function to find substring 
    string str="abcdef";
    string sub="cde"; 
    // TC-> O(n*m)
    if(str.find(sub)!= string::npos){
        cout<<"Found"<<endl;
    }
    //  Brute force string matching algorithm 
    string heystick="abcdef";
    string needle="cde";
    int n=heystick.length();
    int m=needle.length();
    int k=0;
    while(k<=n-m){
        int j=0;
        int i=k;
        while(j<m){
            if(heystick[i]==needle[j]){
                i++;
                j++;
            }
            else{
                break;
            }
        }
        if(j==m){
            cout<<"found at index"<<k<<endl;
        }
        k++;
    }
    return 0;
}