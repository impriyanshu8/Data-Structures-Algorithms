#include<iostream>
using namespace std;
int main(){
    cout<<"enter the table which you want to print:";
    int n;
    cin>>n;
    for (int i=1;i<=10;i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;

    }
}