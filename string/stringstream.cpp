// printing the word of a string using stringstream 
#include<bits/stdc++.h>
using namespace std;
int main(){

       
   string str="hii how are you are you ok!. ";
   stringstream ss(str);
   string temp;
   while(ss>>temp){
     cout<<temp<<endl;
   }
   
  return 0;
}