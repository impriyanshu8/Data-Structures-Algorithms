// #include<iostream>
// using namespace std;
// int main()
// {   int n,f=1;
//     cin>>n;
//    { for(int i=1 ; i<n ; i++)
//      if (n%i==0)
//     f = i ;}

// cout<<f;
// }
#include<iostream>
using namespace std;
int main()
{
    int i,n,f=1;
    cin>>n;
    {
        for(i=n/2;i>=1;i--)
        if (n%i==0)
        break;
    }
    cout<<i;
}