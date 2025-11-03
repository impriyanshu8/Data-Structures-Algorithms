#include<iostream>
using namespace std;
    
     int sum(int arr[],int n){
        int sum=0;
        for(int i=0;i<n;i++){
            sum = sum + arr[i];
        }
        return sum;
    }

 
    int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];}
    int result = sum(arr,5);
    cout<<"The sum of the elements is :"<<result<<endl;
    return 0;
}