#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
bool search(Node* root , int key){
    if (root==NULL){
        return false;
    }
    else if(root->data==key){
        return true; 
    }
    else{
    if(root->data > key){
         return search(root->left,key);
    }
    else 
    return search(root->right , key);
}}
Node* inserttobst(Node*& root, int value) {
    if (root == NULL) {
        root = new Node(value);
        return root;
    }
    if (root->data > value) {
        root->left = inserttobst(root->left, value);
    } else {
        root->right = inserttobst(root->right, value);
    }
    return root;
}
Node* deletenode(Node* root,int value){
     if (root == NULL) {
        
        return NULL;
    }
    else {
        if(root->data > value){
            root->left = deletenode(root->left , value);
        }
        else if (root->data < value){
            root->right = deletenode(root->right , value);
        }
        else{
            // root == val
            // case 1 root has zero child
            if(root->left == NULL && root->right == NULL){
                delete root;
            }
            // case 2 root has one child
            if (root->left == NULL || root->right == NULL){
                if(root->left==NULL)
                    Node* temp = root->right;
                
                else 
                Node* temp =root->left;
            
            delete root;
            return temp;
            }   
            // case 3 root has 2 child

        }
    }
    }
    Node* getinordersuccessor(Node* root){
        while(root->left!= NULL){
            root = root->left;
        }
        return root;
    }

Node* takeinput(Node*& root) {
    int data;
    cin >> data;
    while (data != -1) {
        root = inserttobst(root, data);
        cin >> data;
    }
    return root;
}

void preordertraversal(Node* root){  //NLR
    if(root==NULL){
        return;
    }
    else{
        cout<<root->data<<endl;
        preordertraversal(root->left);
        preordertraversal(root->right);
    }
}
void inordertraveltraversal(Node*root){//LNR
    
    inordertraveltraversal(root->left);
    cout<<root->left<<endl;
    inordertraveltraversal(root->right);
}
void postordertraversal(Node*root){//LRN
     postordertraversal(root->left);
     postordertraversal(root->right);
     cout<<root->data<<endl;
}
void levelOrderTraversal(Node* root) {
    if (root == NULL) return; // Handle empty tree

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* front = q.front();
        q.pop();

        if (front == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << front->data << " ";

            if (front->left != NULL) {
                q.push(front->left);
            }
            if (front->right != NULL) {
                q.push(front->right);
            }
        }
    }
}

int main() {
    Node* root = NULL;
    cout << "Enter data to make BST (end with -1): " << endl;
    takeinput(root);
    cout << "Printing the BST in level order:" << endl;
    levelOrderTraversal(root);
    cout<<endl;
    cout<<"Printing the preorder traversal"<<endl;
    preordertraversal(root);


    return 0;
}

