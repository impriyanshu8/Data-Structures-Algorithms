#include<iostream>
using namespace std;
int power(int a , int b){
    // Base case
    if( b==0)
    return 1;
    if (a==1)
    return 1;
    // Recursive case
    return a*power(a,b-1);

}
int main()
{
 cout<<power(5,3);   
} 
