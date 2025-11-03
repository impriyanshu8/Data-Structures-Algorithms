#include<iostream>
using namespace std;
     void swap(int x , int y){
        int temp;
        temp = x;
        x = y;
        y = temp ;
        cout<<"("<<x<<","<<y<<")"<<endl;
          }
int main()
{  
    int x,y;
    cout<<"enter the 1st number : ";
    cin>>x;
    cout<<"enter the 2nd number : ";
    cin>>y;
    swap(x,y);
    

}