#include<iostream>
using namespace std;
void update(int*p)
{
*p = *p + 1;
}
int main(){
    int a=10;
    int *p=&a;
    cout<<"Before p "<<*p<<endl;
    update(p);
    cout<<"After p "<<*p<<endl;
}