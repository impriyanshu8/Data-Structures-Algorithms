#include <iostream> 

using namespace std; 

class Node{ 

public: 

    int data; 

    Node* next; 

    Node(int val){ 

        data=val; 

        next=NULL;   

    }}; 

class Stack{ 

    Node* head; 

    Node* tail; 

public: 

    Stack(){ 

        head=tail=NULL; 

    } 

    void push(int val){ 

        Node* newnode=new Node(val); 

        if(head==NULL){ 

            head=tail=newnode; 

        }else{ 

            newnode->next=head; 

            head=newnode; 

        } 

    } 

    void pop(){
        if(head==NULL){
            cout<<"stack is empty"<<endl;
            return ;
        }
        Node*temp = head;
        head = temp->next;
        delete temp;
    }
    void print(){ 

        if(head==NULL){ 

            cout<<"Stack is empty"; 

            return; 

        } 

        Node* temp=head; 

        while(temp!=NULL){ 

            cout<<temp->data<<" "; 

            temp=temp->next; 

        } 

    } 

};  

int main(){ 

    Stack s; 

    s.push(1); 

    s.push(2); 

    s.push(3); 

    s.push(4); 

    s.push(5); 

    s.print();
    cout<<endl; 

    s.pop(); 

    s.print(); 
}