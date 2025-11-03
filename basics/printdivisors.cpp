#include<iostream>
#include<math.h>
using namespace std;

int* printDivisors(int n , int &size){
    int *divisor = new int[n] ;
    int count = 0 ;
    for(int i=1 ; i<=n ; i++){
        if(n%i == 0){
            divisor[count++] = i;
        }
    }
    size = count ;
    return divisor ;
    
} 
int main(){
    int number = 89;
    int size;
    int *divisor = printDivisors(number, size);
    cout << "Divisors of " << number << " are: ";
    for (int i = 0; i < size; i++) {
        cout << divisor[i] << " ";
    }
    cout << endl;
    delete[] divisor;
    return 0;
}