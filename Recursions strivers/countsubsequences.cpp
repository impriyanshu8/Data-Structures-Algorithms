#include<iostream>
#include<vector>
using namespace std;
int i=0;
int printSubsequence(vector<int> &arr ,  int index , int sum){
   
    if(index == arr.size()){
        if(sum == 9){
            return 1;
        }
        else return 0;
    }
     
     int exclude = printSubsequence(arr , index + 1 , sum);
    // including index
    sum+= arr[index];
   int include = printSubsequence(arr,index+1,sum);
    sum -= arr[index];
    return include + exclude ;
    
}
    
int main(){
        vector<int> arr ={
            1,2,3,4,5,6
        };
       cout<< printSubsequence(arr,0,0);
    }
