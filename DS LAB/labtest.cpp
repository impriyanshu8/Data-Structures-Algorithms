#include<iostream>
using namespace std;
class stack{
    int size , top;
    int *arr;
    public:
    stack(int maxsize){
        size = maxsize;
        arr = new int [size];
        top = -1;
    }
    bool isfull(){
        return top == (size -1);
    }
    bool isempty(){
        return top == -1;
    }
    void push(int value){
        if (isfull()){
            cout<<"Stack is full"<<endl;
        }
        else {
            top ++;
            arr[top] = value;
        }
    }
    void pop(){
        if(isempty()){
            cout<<"Stack empty"<<endl;
        }
        else {
            cout<<"Popped value : "<<arr[top]<<endl;
            top--;
        }
    }
    void display(){
        if(isempty()){
            cout<<"Stack is full"<<endl;
        }
        else{ cout<<"The stack is : "<<endl;
            for(int i=0;i<=top;i++){
                cout<<arr[i]<<"  "<<endl;
            }
        }
    }
    void copystack(){
        int *copy;
        copy = new int [size];
        for(int i=0;i<=top;i++){
            copy[i] = arr[i];
        }
        cout<<"Copy of the stack is"<<endl;
        for(int i=0;i<=top;i++){
            cout<<copy[i]<<endl;
        }
    }

};
int main(){
    stack s(10);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<"Stack before popping: ";
    s.display();
    // s.pop();
    s.pop();
    s.display();
    s.copystack();



}