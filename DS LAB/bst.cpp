#include <iostream> 

using namespace std; 

class Node { 

public: 

    int data; 

    Node* left; 

    Node* right; 

    Node (int data){ 

        this->data=data; 

        left=right=NULL; 

    } 

}; 

Node* insert (Node* root ,int val){ 

    if(root==NULL) { 

        root=new Node(val); 

        return root; 

    } 

    if(root->data>val){ 

        root->left=insert(root->left,val); 

    }else{ 

        root->right=insert(root->right,val); 

    } 

} 

void inorder(Node* root){ 

    if(root==NULL){ 

        return; 

    } 

    inorder(root->left); 

    cout<<root->data<<" "; 

    inorder(root->right); 

} 

void preorder (Node* root) { 

    if(root==NULL) { 

        return; 

    } 

    cout<<root->data<<" "; 

    preorder(root->left); 

    preorder(root->right); 

} 

void postorder(Node* root) { 

    if(root==NULL) { 

        return; 

    } 

    postorder(root->left); 

    postorder(root->right); 

    cout<<root->data<<" "; 

} 

Node* buildbst(int arr[],int n){ 

    Node* root=NULL; 

    for(int i=0;i<n;i++){ 

        root=insert(root,arr[i]); 

    } 

    return root; 

} 

bool search(Node* root,int key){ 

    if(root==NULL){ 

        return false; 

    } 

    if(root->data==key){ 

        return true; 

    } 

    if(root->data>key){ 

        return search(root->left,key); 

    }else{ 

        return search(root->right,key); 

    } 

} 

Node* getinordersuccessor(Node* root){ 

    while(root->left != NULL){ 

        root=root->left; 

    } 

    return root; 

} 

Node* delnode(Node* root,int val){ 

    if(root==NULL){ 

        return NULL; 

    } 

    if(root->data>val){ 

        root->left= delnode(root->left,val); 

    }else if(val>root->data){ 

        root->right= delnode(root->right,val); 

    }else{ 

        //root==val 

        //case1 : 0 children 

        if(root->left==NULL && root->right==NULL){ 

            delete root; 

            return NULL; 

        } 

  

        //case 2: 1 child 

        if(root->left==NULL || root->right==NULL){ 

            return root->left==NULL? root->right : root->left; 

        } 

        //case3: 2 children 

        Node* IS =getinordersuccessor(root->right); 

        root->data= IS->data; 

        root->right=delnode(root->right,IS->data); 

        return root; 

    } 

    return root; 

} 

int main(){ 

    int arr[6]={12,2,43,30,98,67}; 

    Node* root= buildbst(arr,6); 

    inorder(root);cout<<endl; 

    preorder(root);cout<<endl; 

    postorder(root);cout<<endl; 

    cout<<search(root,87); 

    delnode(root,34);cout<<endl ;

    inorder(root);} 