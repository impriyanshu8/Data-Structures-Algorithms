#include <iostream> 

using namespace std; 

class Node{ 

public: 

    int data; 

    Node* next; 

    Node(int val){ 

        data=val; 

        next=NULL;   

    } 

}; 

class Queue{ 

    Node* head; 

    Node* tail; 

public: 

    Queue(){ 

        head=tail=NULL; 

    } 

    void enqueue(int val){ 

        Node* newnode=new Node(val); 

       if(tail==NULL){
        head=tail = newnode;
       }
       else{
        newnode = tail->next;
        tail= newnode;
       }
    } 

  

    void dequeue(){ 

        if(head==NULL){ 

            cout<<"Queue is empty"; 

            return; 

        } 

        Node* temp=head; 

        head=temp->next; 

        delete temp; 

    } 

    void print(){ 

        if(head==NULL){ 

            cout<<"Queue is empty"; 

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

    Queue q; 

    q.enqueue(1); 

    q.enqueue(2); 

    q.enqueue(3); 

    q.enqueue(4); 

    q.enqueue(5); 

    q.print();cout<<endl; 

    q.dequeue(); 

    q.print(); 

}  