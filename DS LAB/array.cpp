#include<iostream>
using namespace std;
int main(){
int arr[10];
cout<<"Enter the elements of array :"<<endl;
for(int i=0;i<8;i++)
{
    cin>>arr[i];
}
for(int i=2;i<10;i++){
    arr[i]=arr[i-1];
}
for(int i=0;i<8;i++){
    cout<<arr[i]<<"  ";
}



}