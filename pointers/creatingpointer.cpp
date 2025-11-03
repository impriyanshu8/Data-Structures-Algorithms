#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int *myptr;
    myptr = &x;
    cout<<"The value of x : "<<x<<endl;
    cout<<"The address of x stored in pointer is : "<< myptr<<endl;
    cout<<"The value of x using pointer is : "<<*myptr<<endl;




}