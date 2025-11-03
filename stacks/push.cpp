#include<iostream>
using namespace std;

const int size = 10;  // Make 'size' a constant
int myStack[size];    // Define the stack array with constant size
int top = -1;

void push(int n) {
    if (top < size - 1) {  // Check for stack overflow
        top++;
        myStack[top] = n;  // Push the value onto the stack
        cout << "pushed value " << n << endl;
    } else {
        cout << "stack overflow" << endl;
    }
}

int main() {
    push(90);
    push(29);
    push(47);
    return 0;
}

