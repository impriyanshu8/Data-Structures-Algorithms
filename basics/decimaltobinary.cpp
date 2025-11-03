#include<iostream>
#include<math.h>
using namespace std ;
int main()
{
    int n ,ans=0,i=1;
   int bit;
    cout<<"Enter the decimal number : ";
    cin>>n;
    while (n!=0)
    {
        int bit = n&1;
        ans = bit* i + ans;
        n=n>>1;
      
        i=i*10;
    }
    cout<<ans;
    
}