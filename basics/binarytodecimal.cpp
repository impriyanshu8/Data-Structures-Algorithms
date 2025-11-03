#include<iostream>
using namespace std;
int main(){

    int n,i=1,ans;
    cout<<"Enter the number in binary form : ";
    cin>>n;
    while (n!=0)
    {
       int  digit = (n&1);
       if (digit == 1)
       {
        ans = i*digit + ans ;
       }
       i=i*2;
       n=n/10;

    
    }
    cout<<ans;
    
}