#include<iostream>
#include<queue>

using namespace std;

class node{
    public:

    int data;
    node* left;
    node* right;

    node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};


node* buildTree(node* root){
    int data;
    cout<<"Enter the data :" ;
    cin>>data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"For Left ";
    root -> left = buildTree(root -> left);

    cout<<"For Right ";
    root -> right = buildTree(root -> right);

    return root;
}


// 2 4 8 -1 -1 9 -1 -1 8 10 -1 -1 11 -1 -1 3 6 12 -1 -1 13 -1 -1 7 14 -1 -1 15 -1 -1 

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp -> data<<" ";

            if(temp->left){
                q.push(temp -> left);
            }
            if(temp -> right){
                q.push(temp -> right);
            }

        }

    }
}



void inorderTraversal(node* root){
    if(root == NULL){
        return;    
    }

    inorderTraversal(root -> left);
    cout<<root -> data;
    inorderTraversal(root -> right);
}

void preorderTraversal(node* root){
    if(root == NULL){
        return;    
    }

    cout<<root -> data;
    preorderTraversal(root -> left);
    preorderTraversal(root -> right);
}

void postorderTraversal(node* root){
    if(root == NULL){
        return;    
    }

    postorderTraversal(root -> left);
    postorderTraversal(root -> right);
    cout<<root -> data;
}

int main(){

    node* root = NULL;

    root = buildTree(root);

    cout<<"Level Order Traversal"<<endl;
    levelOrderTraversal(root);
    cout<<endl;

    cout<<"InOrder Traversal"<<endl;
    inorderTraversal(root);
    cout<<endl;

    cout<<"PreOrder Traversal"<<endl;
    preorderTraversal(root);
    cout<<endl;

    cout<<"PostOrder Traversal"<<endl;
    postorderTraversal(root);


    

}