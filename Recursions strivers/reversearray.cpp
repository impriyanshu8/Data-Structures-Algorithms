#include<iostream>
#include<vector>
using namespace std;
void reversearray(vector<int> &arr,int l , int r){
    if(l>=r){
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<", ";
        }
        return ;
    }
        swap(arr[l],arr[r]);
        reversearray(arr,l+1 , r-1);
    
   
}
int main(){
    vector<int> arr={
        1,2,3,4,5,6,7,8,9,0
    };
    reversearray(arr,0,arr.size()-1);
}

