#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
// constructor
    Node(int value){
        this->data = value;
        this->next = NULL ;
        this->prev = NULL ;

    }
};
void display(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp-> next;
    }
    cout<<"NULL"<<endl;
}
void insertAttail(Node* &head,Node* &tail , int value){
   if(head==NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else{
        Node*temp = new Node(value);
        tail->next = temp;
        temp-> prev = tail;
        tail = temp;
    } 
}
int findLength(Node* &head) {
  Node* temp = head;
  int len = 0;

  while(temp != NULL) {
    len++;
    temp = temp->next;
  }
  return len;
}
void insertathead(Node* &head , Node* &tail ,int  value){
    if(head==NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }

  else{
      Node*temp = new Node(value);
    temp->next = head ;
    head->prev = temp ;
    head = temp;
  }
}
void insertAtposition(Node* &head , Node* &tail , int value,int poss){
    if(head==NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else {
    int len = findLength(head);
    if(poss == 1) {
      insertathead(head, tail, value);
    }
    else if(poss == len+1) {
      insertAttail(head, tail, value);
    }
   else{
    Node* new_node = new Node(value);
    Node* prevnode=head;
    int curr_poss = 1;
    while(curr_poss != (poss -1)){
        prevnode = prevnode-> next ;
        curr_poss ++ ;
    }
    int cur_poss =1;
    Node* nextnode = head;
    while(cur_poss!=poss+1){
        nextnode = nextnode -> next ;
        cur_poss ++ ;
   }
   new_node -> prev = prevnode;
   prevnode-> next = new_node;
   new_node -> next = nextnode;
   nextnode->prev = new_node;
}
}
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;  
    insertathead(head,tail,23);  
    insertathead(head,tail,12);  
    cout<<"the tail is "<<tail->data<<endl;
    insertathead(head,tail,11);  
    display(head);
    insertAttail(head, tail , 34);
    insertAttail(head, tail , 67);
    insertAttail(head, tail , 89);
    insertAttail(head, tail , 22);
    display(head);
    insertAtposition(head,tail,456,4);
    display(head);


}