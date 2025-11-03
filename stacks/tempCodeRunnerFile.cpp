#include<iostream>
using namespace std;
const int size = 10;
int mystack[size];
int top= -1;
void push(int n)
{
    if(top<(size - 1))
    {
        top++;
        mystack[top] = n;
        cout<<"pushed value "<<n<<endl;
    }
    else 
    {
        cout<<"stack overflow "<<endl;
    }
}
void pop()
{
    if (top<(size - 1))
    { 
        cout<<"popped value "<< mystack[top]<<endl;
        top--;
    }
    else 
    cout<<"Stack underflow"<<endl;

}

int main()
{
push(56);
push(35);
push(45);
pop();
pop();
pop();
pop();

}