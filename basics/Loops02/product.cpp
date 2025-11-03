#include<iostream>
using namespace std;
int main()
{
    int a,n;
    cout<<"Enter the number : " ;
    cin>>n;
    int product = 1;
    while(n!=0)
    {
        a = n%10;
        n= n/10;
        product = product*a ;

    }
    cout<<product ;

}