#include<iostream>
using namespace std;
class queue{
    int front , rear, size;
    int *arr;
    public:
// Constructor for queue
    queue(int maxsize){
        this->size = maxsize;
        arr = new int[size];
        rear = -1;
        front = -1;
 }
//  To check whether queue is empty
bool Isempty(){
    return front == -1;
}
// To check whether queue is full 
bool Isfull(){
    return rear ==( size -1) ;
}
void enqueue(int value){
    if(Isfull()){
        cout<<"the queue is full "<<endl;
        return;
    }
    if(Isempty()){
        front = 0;
    }

rear ++;
arr[rear] = value;
cout<<"Enqueued "<<value<<endl;

}
int dequeue(){
    if(Isempty()){
        cout<<"Cannot deque the queue is empty"<<endl;
        return -1;
        
    }
    int dequedvalue = arr[front];
    // when only one element is present in queue 
    if(front == rear ){
        rear= -1 ;
        front = -1;
    }
    else 
    front ++;
    return dequedvalue;
}
int peek(){
    if (Isempty()){
        cout<<"Empty queue"<<endl;
        return -1;
}
else 
return arr[front];}

void print(){
 if (Isempty()){
    cout<<"Empty queue"<<endl;
    
 }
 else { cout<<"Queue Elements: ";
    for(int i=front;i<=rear;i++){
        cout<<arr[i]<<endl;
    }
 }
}
};
int main(){
    queue q(3);
    q.dequeue();
    q.enqueue(1);
   cout<<"dequed value"<< q.dequeue()<<endl;
    q.enqueue(4);
    q.enqueue(6);
    q.print();
    cout<<"dequed value"<<q.dequeue()<<endl;
    q.enqueue(9);
    q.enqueue(8);
    cout<<"the top element is "<<q.peek()<<endl;
    

    

    
}