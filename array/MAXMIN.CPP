#include<iostream>
#include<climits>
using namespace std ;
int getmax(int arr[],int n)
{
    int max = INT_MIN ;
    for(int i=0;i<n;i++){
        if (arr[i]> max) 
       { 
        max = arr[i];
        }
    }
    return max;

}
int getmin(int arr[],int n)
{
    int min = INT_MAX ;
    for(int i=0;i<n;i++){
        if (arr[i]< min){ 
        min = arr[i];
        }
    }
    return min;

}

int main(){
    int arr[5] ;
    cout<<"Enter the elements : "<<endl;
    for(int i= 0;i<5;i++){
        
        cin>>arr[i];
    }
    
    int size = 5;
    cout<<"Max element is :"<< getmax(arr,size)<<endl;
    cout<<"Min element is :"<< getmin(arr,size)<<endl;
    return 0;



}