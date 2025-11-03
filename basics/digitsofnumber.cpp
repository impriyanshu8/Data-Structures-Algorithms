#include<iostream>
using namespace std ;
int main()
{
    int n,digit;
    int sum = 0 , product = 1;
    cout<<"Enter the number : ";
    cin>>n;
    while (n!=0)
    {
        digit = n%10;
        sum = sum + digit;
        product = product * digit;
        n=n/10;

    }
    cout<<sum<<endl;
    cout<<product<<endl;


}