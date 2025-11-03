#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    // constructor 
    Node(int value){
        this-> data = value ;
        this-> left = NULL ;
        this-> right = NULL;
    }
};
Node* createtree(){
    cout<<"Enter the value for the node ";
    int value;
    cin>>value;
    if(value == -1){
        return NULL;
    }
    
    Node* root = new Node(value);
    cout<<"for left side node of " <<value<<endl;
    root->left =  createtree();
     cout<<"for right side node "<<value<<endl;
    root->right = createtree();
    return root ;

}
void levelordertraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        Node* front = q.front();
        q.pop();
        if(front==NULL){
        cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }

    }
        else{cout<<front->data<<endl;
        if(front->left!= NULL){
            q.push(front->left);
        }
        if(front->right!=NULL){
            q.push(front->right);
        }
        }
    }
}
void preordertraversal(Node* root){
    if (root == NULL)
    { return ;
}
cout<<root->data<<"  ";
preordertraversal(root->left);
preordertraversal(root->right);

}
void inordertraversal(Node* root){
    if(root==NULL){
        return;
    }
    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);
}
void postordertraversal(Node* root){
     if(root==NULL){
        return;
    }
    postordertraversal(root->left);
    postordertraversal(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node* root = createtree();
    // cout<<"Preordertraversal  ";
    // preordertraversal(root);
    levelordertraversal(root);
}

    

