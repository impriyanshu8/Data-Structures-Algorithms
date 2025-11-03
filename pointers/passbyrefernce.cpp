#include<iostream>
using namespace std ;
void update2 (int& n)
{
    n++;

}
void update1 (int n)
{
    n++;

}
int main(){
    int x = 8;
    cout<<"When USing pass by value\n" <<"Before function call the value is: "<<x<<endl;
    update1(x);
    cout<<"After function call the value is :"<<x<<endl;
    cout<<"When using pass by reference "<<endl;
    cout<<"Before function call the value is :"<<x<<endl;
    update2(x);
    cout<<"After function call the value is :"<<x<<endl;

}