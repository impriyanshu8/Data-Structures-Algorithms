#include<iostream>
using namespace std;
class Node{
    public:
    int data ;
    Node* next;

     Node (int data){
        this-> data = data;
        this-> next = NULL;
    }
    void print(){
        cout<<"Data = "<<this-> data<<endl;
        cout<<"next loc= "<<this->next<<endl;
    }
};

void insertathead(Node* &head , int data){
Node* New_node = new Node(data);
New_node->next = head;
head = New_node;
}
void display (Node* head){
    Node* temp = head;
    while (temp!=NULL)
    {
       cout<<temp->data<<"->";
       temp = temp->next;
       
    }cout<<"NULL"<<endl;
    
}
void insertattail(Node* &head , int val){
    Node* new_node = new Node(val);
    Node* temp = head;
    while(temp->next!= NULL){
        temp = temp->next;
    }
    temp->next= new_node;
}
void insertatposition(Node* head , int value , int poss){
    if(poss==0){
        insertathead(head,value);
    }
    else {
        Node* new_node = new Node(value);
        Node* temp = head;
        int curr_poss =0;
        while(curr_poss != (poss -1))
        {
            temp= temp->next;
            curr_poss++;
        }
        new_node ->next = temp-> next ;
        temp-> next = new_node;

    }
}
void insertafterposition(Node* head , int value , int poss){
    if(poss==0){
        insertathead(head,value);
    }
    else {
        Node* new_node = new Node(value);
        Node* temp = head;
        int curr_poss =0;
        while(curr_poss != (poss))
        {
            temp= temp->next;
            curr_poss++;
        }
        new_node ->next = temp-> next ;
        temp-> next = new_node;

    }
}

void updateatposition( Node* head,int poss,int value){
    if (poss==0) {
        head->data = value;
    }
    else{
    Node* temp = head;
    int curr_poss = 0;
    while(curr_poss!=poss){
    temp = temp->next;
    curr_poss++;
    }
    temp->data = value;
}}
void deleteathead(Node* &head){
    Node* temp = head;
    head = head->next;
    free(temp);
}
void deleteattail(Node* &head){
    Node* second_last = head;
    while(second_last ->next->next != NULL){
        second_last = second_last->next;
    }
    Node* temp = second_last ->next;
    second_last->next= NULL;
    free(temp);
}
void deleteatposition(Node* &head,int poss){
    if(poss==0){
        deleteathead(head);
    }
    Node* prev = head;
    int curr_poss = 0;
    while(curr_poss!= (poss -1)){
        prev = prev ->next;
        curr_poss++;
    }
    Node* temp = prev->next;
    prev -> next = prev->next->next;
    free(temp);
}
int main(){
    Node* head = new Node(1);
    insertathead(head,2);
    display(head);
    insertathead(head,3);
    display(head);
    insertattail(head,4);
    display(head);
    insertatposition(head,5,3);
    display(head);
    insertafterposition(head,67,2);
    display(head);
   
    insertatposition(head,59,2);
    display(head);
    updateatposition(head,2,89);
    display(head);
    deleteathead(head );
     display(head);
     deleteatposition(head,2);
     display(head);
     



}