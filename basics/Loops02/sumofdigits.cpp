#include<iostream>
using namespace std;
int main()
{
    int a =0,n;
    cout<<"Enter the number : " ;
    cin>>n;
    int sum = 0;
    while(n!=0)
    {
        a = n%10;
        n= n/10;
        sum = sum + a;

    }
    cout<<sum ;

}