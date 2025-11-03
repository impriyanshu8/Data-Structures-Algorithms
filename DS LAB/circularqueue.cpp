#include<iostream>
using namespace std;
class circularqueue{
    int front , rear, size;
    int *arr;
    public:
    circularqueue(int maxsize){
        front = -1;
        rear = -1;
        this -> size = maxsize;
        arr = new int [size];
    }
    bool isfull(){
        return (rear + 1)% size == front;
    }
    bool isempty(){
        return front == -1;
    }
    void enqueue(int value){
        if (isfull()){
    cout<<"Queue full"<<endl;
        }
        if (isempty()){
            front = rear = 0;
        }
        else {
            rear = (rear + 1 )% size ;
        }
        arr[rear] = value;
    }
    void dequeue (){
        if (isempty()){
            cout<<"Empty queue"<<endl;
        }
        cout<<"Dequeued value "<<arr[front]<<endl;
        if (front == rear ){
            front = rear = -1;
        }
        else front = (front + 1)% size ;
    }
    void display(){
        if (isempty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        int i = front;
        while (true)
        {
            cout<<"arr[i]"<<", ";
            if (i == rear);
            break;
            i = (i+1) % size;
        }
        cout<<endl;
    }
    ~circularqueue(){
        delete []arr;
    }

};
int main(){
      circularqueue q(5);  // Size of the circular queue is 5

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.display();

    q.dequeue();
    q.display();

    q.enqueue(50);
    q.enqueue(60);  // Queue becomes full after this

    q.display();

    q.enqueue(70);  // Trying to insert when the queue is full

    q.dequeue();
    q.display();

    return 0;
}
