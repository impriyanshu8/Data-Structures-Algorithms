#include<iostream>
using namespace std;
int main()
{
    int n=9;
    int a=0;
    int b=1;
    cout<<a<<","<<b<<",";
    for(int i=0;i<n;i++)
    {  int temp = a+b;
       cout<<temp<<",";
       a = b;
       b = temp;
    }
}