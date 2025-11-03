#include<iostream>
#include<vector>
using namespace std;
void printSubsequence(vector<int>&arr,vector<int> &output,int index){
    if (index == arr.size())
    {
        cout << "{ ";
        for (int num : output) cout << num << " ";
        cout << "}" << endl;
        return ;
    }
    
    // exclude index 
    printSubsequence(arr,output,index+1);
     // incldue index 
     output.push_back(arr[index]);
     printSubsequence(arr,output,index+1);
     output.pop_back();
   
    
}
int main(){
    vector<int> arr ={
        1,2,3
    };
    vector<int>output;
    printSubsequence(arr,output,0);
}