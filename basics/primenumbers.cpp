#include<iostream>
using namespace std;
int main()
{
    int n ;
    bool x = 0;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if( n % i == 0) 
       {  x = 1;
        break; }
 }
    if (x == 0)
    cout<<"Prime number "<<endl;

    else 
    cout<<"Composite number"<<endl;
}