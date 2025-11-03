#include<iostream>
using namespace std;
void sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++){
       
   
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[i])
      
        
    
        swap(arr[j],arr[i]);}
    
    
    
}
cout<<"THE SORTED ARRAY IS :";
for(int i=0;i<n;i++)
{cout<<arr[i]<<"  ";
}
}

int main(){
    int arr[5];
   
    cout<<"Enter the elements of array: ";
    for(int i=0;i<5;i++){
    cin>>arr[i];}
    sort (arr,5);

}
