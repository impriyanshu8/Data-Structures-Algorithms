#include<iostream>
using namespace std;
void linearsearch(int arr[],int n)
{   int a,count=0;
    cout<<"Enter the element you want to search :"<<endl;
    cin>>a;
    for(int i=0;i<n;i++){
        if (arr[i] == a)
        {count++;
        cout<<"The element is found is at the "<<i<<"th position of array"<<endl;
        break;}
    }
    if (count==0){
        cout<<"The element was not found"<<endl;
    }
}
int main(){
    int arr[5];
   
    cout<<"Enter the elements of array: ";
    for(int i=0;i<5;i++){
    cin>>arr[i];}
    linearsearch(arr,5);




}