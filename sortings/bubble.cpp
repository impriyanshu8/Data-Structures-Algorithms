#include<iostream>
using namespace std;
void print(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
    print(arr,n);
}




int main(){
    int arr[5];
   
    cout<<"Enter the elements of array: ";
    for(int i=0;i<5;i++){
    cin>>arr[i];}
    bubblesort(arr,5);

}