#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void displaynode(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";  // Print the data instead of the address
        temp = temp->next;
    }
    cout << "nullptr"<<endl;  // To ensure there's a newline at the end
}
void insertathead(Node * &head ,Node* &tail ,int value){
    Node* temp = new Node (value);
    temp ->next = head;
    head = temp;
    while(temp->next!=NULL){
        temp=temp->next;

     }
     tail = temp;

}
void insertattail(Node* & head , int value)
{   Node* new_node = new Node(value);
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next =new_node;
}
void insertatposition(Node*&head , int poss , int value){
    Node* new_node = new Node(value);
    Node*temp = head;
    int cur_poss = 1;
    while(cur_poss != (poss-1) ){
        temp = temp->next;
        cur_poss ++ ;
}
new_node->next = temp->next;
temp->next = new_node;
}
int length(Node* &head){
    Node* temp = head;
    int length =0;
    while (temp!= NULL){
        temp = temp->next;
        length ++ ;    
    }
    return length;

}
void deletenode(Node*&head, int poss ){
    if (poss==1){
     Node*temp = head;
     head = temp->next;
     delete temp;
    }
    else{
        Node*temp = head;
    int curr_poss = 1;
    while (curr_poss != poss-1){
        temp = temp->next;
        curr_poss ++ ;
    }
    Node*temp_2 = temp->next;
    temp->next = temp->next->next;
    delete temp_2;}
    
}
int main() {
    Node* head = NULL;
    Node* tail = NULL;
    Node* node_1 = new Node(2);
    head = node_1;  // Set head to point to the first node
    insertathead( head,tail,1);
    insertattail(head,3);
    insertattail(head,4);
    insertatposition(head,3,5);
    insertatposition(head,4,67);
    displaynode(head);
    deletenode(head,6);
    deletenode(head,1);

    insertathead(head,tail,11);
    displaynode(head);
    // cout<<"the length of list is "<<length(head);

    return 0;
}
