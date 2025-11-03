#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{   cout<<"After reversing the array: ";
    for(int i=(n-1);i>=0;i--){
        cout<<arr[i]<<"  ";
  }
    
}
int main(){
    int arr[5];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
  }
    reverse(arr,5);



}




