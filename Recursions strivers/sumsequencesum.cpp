#include<iostream>
#include<vector>
using namespace std;
bool printSubsequence(vector<int>&arr,vector<int> &output,int index,int sum){
    if (index == arr.size() )
    {
        if(sum == 9){
        cout << "{ ";
        for (int num : output) cout << num << " ";
        cout << "} " ;
        cout<<endl;
        return true ;
        }
        return false;
    }
    
    
    // exclude index 
     if (printSubsequence(arr,output,index+1,sum)) return true;
     // incldue index 
     output.push_back(arr[index]);
     sum = sum + arr[index] ;
    if ( printSubsequence(arr,output,index+1,sum)) return true;
     sum = sum - arr[index];
     output.pop_back();
     return false ;
   
    
}
int main(){
    vector<int> arr ={
        1,2,3,4,5,6
    };
    vector<int>output;
    printSubsequence(arr,output,0,0);
}