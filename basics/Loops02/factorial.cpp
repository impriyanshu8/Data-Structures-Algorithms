#include<iostream>
using namespace std;
int main ()
{
    int n,fac=1,i ;
    cout<<"Enter the nummber :";
    cin>>n;
    for(i=1;i<=n;i++)
    { fac = fac * i ;
    }
    cout<<fac ;

}