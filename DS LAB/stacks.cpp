#include<iostream>
using namespace std;
class stack{
    int top , size ;
    int *arr;
    public:
    // constructor 
    stack(int maxsize){
        this-> size = maxsize;
        arr = new int[size];
        top = -1;

    }
    ~stack(){
        delete[]arr;
    }
    bool isfull(){
        return (top) == (size -1);
    }
    bool isempty(){
        cout<<"stack is empty"<<endl;
        return top == -1;
    }
    void push(int value){
        if(isfull()){
            cout<<"Stack overflow"<<endl;
        }
        else{
        top++;
        arr[top] = value;
        cout<<"Pushed value "<<value<<endl;}
    }
    void pop(){
        if(isempty()){
            cout<<"Stack underflow"<<endl;
        }
        else
        cout<<"popped value "<<arr[top]<<endl;
        top--;
    }
    int peek(){
        if(isempty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else
        return arr[top];
    }
    void display(){
        if(isempty()){
            cout<<"Stack empty"<<endl;
        }
        else 
        cout<<"The stack values are:";
        for(int i=0;i<=top;i++){
            cout<<arr[i];
        }
        cout<<endl;
    }
};
int main(){
    stack s1(10);
    s1.isempty();
    s1.push(9);
    s1.push(4);
    s1.push(2);
    s1.push(1);
    s1.push(5);

}
