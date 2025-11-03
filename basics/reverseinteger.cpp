#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,digit,rev = 0,i=0;
    cout<<"Enter the number :";
    cin>>n;
    while (n!=0)
    {
      digit = n%10;
      rev = rev * 10 + digit ;
     
      i++;
     
      n = n/10;  }
    cout<<"the reverse of the number is : "<<rev<<endl;


}