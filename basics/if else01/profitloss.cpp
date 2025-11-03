#include<iostream>
using namespace std;
int main()
{
    int cp;
    cout<<"Enter cost price : ";
    cin>>cp;
    int sp;
    cout<<"Enter selling price ";
    cin>>sp;
    if (sp==cp)
    {
        cout<<"There is loss of"<<cp-sp;    
    }
    if (sp>cp)
    {
        cout<<"There is profit of "<<sp-cp;

    }
   
    if  (sp<cp)
    {
        cout<<"There is loss";
    }
}
