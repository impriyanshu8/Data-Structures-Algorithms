#include<iostream>
using namespace std;
bool checkPallendrome(string &str , int i){
    int n = str.size();
    if (i >= n / 2) {
        return true;
    }
    if(str[i]!=str[n-1-i]){
        return false ;
    }
     return checkPallendrome(str,i+1);
}
int main(){
    string str ;
    cout<<"Enter a world to check for pallendrome: "<<endl;
    cin>>str;
    bool ans = checkPallendrome(str , 0) ;
    if (ans)
        cout << "Yes, it is a palindrome." << endl;
    else
        cout << "No, it is not a palindrome." << endl;

    return 0;
    
}