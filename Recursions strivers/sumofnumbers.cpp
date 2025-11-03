#include<iostream>
using namespace std;
// FUNCTIONAL RECURSION

int sum(int n){
    if(n==1){
        return 1;
    }
    else {
        return n + sum(n-1) ;
    }
}
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int sumofnumbers = sum(n);
    cout<<sumofnumbers<<endl;

}



// PARAMETRIZED RECURSION
void sumofnumbers(int i , int sum){
    if(i<1){
     cout<<sum ;
    }
    else return sumofnumbers(i-1, sum+i);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    sumofnumbers (n,0);

}