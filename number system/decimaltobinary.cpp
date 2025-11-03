#include<iostream>
#include<math.h>
using namespace std;
void decimaltobinary(){
    int n;
   cout<<"Enter the number to convert in binary form:";
   cin>>n; 
   int i=0,res=0;
   while(n>0){
    int bit = n % 2;
    res= bit*pow(10,i++) + res;
    n=n/2;
   }
   cout<<res;
}
int main(){
    decimaltobinary();
}