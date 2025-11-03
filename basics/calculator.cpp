#include<iostream>
using namespace std ;
int main()
{   int num,a ,b;
    cout<<"Enter one for addition"<<endl;
    cout<<"Enter two for subtraction"<<endl;
    cout<<"Enter three for multiplication"<<endl;
    cout<<"Enter four for division"<<endl;
    cin>>num;
    switch(num)
    {
case(1): cout<<"Enter the first number : ";
        cin>>a;
        cout<<"Enter the second number : ";
        cin>>b;
        cout<<"The sum of the number is "<<a + b <<endl;
        break;
 case(2): cout<<"Enter the first number : ";
        cin>>a;
        cout<<"Enter the second number : ";
        cin>>b;
        cout<<"The subtraction of the number is "<<a - b <<endl;
        break;
case(3): cout<<"Enter the first number : ";
        cin>>a;
        cout<<"Enter the second number : ";
        cin>>b;
        cout<<"The multiply of the number is "<< a*b <<endl;
        break;
case(4): cout<<"Enter the first number : ";
        cin>>a;
        cout<<"Enter the second number : ";
        cin>>b;
        cout<<"The division of the number is "<< a/b<<endl;
        break;
default: cout<<"NO operation will be performed ";


    }
    cout<<endl;
}