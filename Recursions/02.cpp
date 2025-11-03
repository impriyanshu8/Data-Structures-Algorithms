#include<iostream>
using namespace std;
void printnumber(int n ,int i){
        if(i>n){
            return;
        }
        cout<<i<<endl;
        printnumber(n,i+1);
    }
int main(){
    int n;
    cout<<" Enter the number upto which you want to print the number :"<<endl;
    cin>>n;
    printnumber(n,0);
    
}