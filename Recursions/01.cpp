#include<iostream>
using namespace std ;
 void printname(int i, int n){
    if (i>=n)
   { return ;
   }
   cout<<"Priyanshu "<<endl;
   printname(i+1,n);


}

int main(){
    int i=0;
    int n;
    cout<<"Enter the number of times you want to print the name : ";
    cin>> n;
    printname(i,n);

}