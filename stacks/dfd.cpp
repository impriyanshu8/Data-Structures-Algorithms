#include <iostream> 

using namespace std; 

class CircularQueue{ 

 private: 

        int arr[5]; 

        int front,rear,size,capacity; 

    public: 

 CircularQueue(){ 

            rear,front=-1; 

            size=0; 

            capacity=5; 

        } 

  

        bool isempty(){ 

            return size==0; 

        } 

        bool isfull(){ 

            return size==capacity; 

        } 

  

        void enqueue(int x){ 

            if(isfull()){ 

                cout<<"Queue is full"<<endl; 

                return; 

            } 

            if(isempty()){ 

                front=0; 

            } 

            rear=(rear+1)%capacity; 

            arr[rear]=x; 

            size++; 

            cout<<"Enqueued element is"<<x<<endl;; 

  

        } 

  

        int dequeue(){ 

  

            if(isempty()){ 

                cout<<"Queue is empty"<<endl; 

                return -1; 

            } 

  

            int x=arr[front]; 

            front=(front+1)%capacity; 

            size--; 

            cout<<"Dequeued element"<<x<<endl;; 

            return x; 

        } 

  

        void display(){ 

            if(isempty()){ 

                cout<<"Queue is empty"; 

                return; 

            } 

            cout<<"Queue elements are"; 

            for(int i=0;i<size;i++){ 

                cout<<arr[i]; 

            } 

            cout<<endl; 

        } 

  

}; 

  

int main(){ 

    CircularQueue c; 

    c.enqueue(1); 

    c.enqueue(2); 

    c.enqueue(3); 

    c.enqueue(4); 

    c.display(); 

    c.dequeue(); 

    c.display(); 

     return 0; 

}      