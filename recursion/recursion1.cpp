 #include <bits/stdc++.h>
using namespace std;
 // factorial of a number

int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}


//   print sum from 1 to n 

int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}


// calculate nth term of a fibbonachi series
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1) +fibo(n-2);
}

// stair path problem if it takes 1,2,3 step at a time then no. of ways

 
int stair(int n){ 
    if(n==2) return 2;
    if( n==1) return 1;
    if(n==3) return 3;
    return stair(n-1) +stair(n-2) +stair(n-3);
}


// maze path problem where you can go only down and right to reach your destination

int maze(int sc, int sr,int ec, int er){
    if(sc>ec || sr> er) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways = maze(sc+1, sr, ec, er);
    int downways= maze(sc, sr+1,ec,er);
    int totalways=rightways+downways;
    return totalways;
}


// maze path ko print karana hai 

void mazepath(int sc, int sr,int ec, int er, string str){
    if(sc>ec || sr> er) return ;
    if(sr==er && sc==ec){
        cout<<str<<endl;
        return;
    }
   mazepath(sc+1, sr, ec, er,str+'R');
   mazepath(sc, sr+1,ec,er,str+'D');
}


// counting no. of ways to reach the destination using 2 variable only

int maze(int ec, int er){
    if(ec<1 | er<1) return 0;
    if(ec==1 && er==1) return 1;
    int rightways = maze(ec-1, er);
    int downways= maze(ec,er-1);
    int totalways=rightways+downways;
    return totalways;
}


// priting Zig Zag using pre in post method 

void pip(int n){
    if(n==0 ) return;
    cout<<n;
    pip(n-1);
    cout<<n;
    pip(n-1);
    cout<<n;
}
// finding gcd of two numbers

// int gcd(int a, int b){
//     if(b==0) return a;
//     return gcd(b,a%b);
// }
int main(){
    

    return 0;
}
