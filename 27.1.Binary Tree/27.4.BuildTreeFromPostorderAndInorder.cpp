/*
ALGORITHM 
1. start from the end of postorder and pick an element to create a node
2. decrement posorder idx
3. search for picked element's pos in order
4. call to build right subtree from inorder pos+1 to end
5. call to build left subtree from inorder 0 to pos-1
6. return the node
*/



#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
}; 

int search(int inorder[] ,int start,int end ,int val){
    for(int i =start ;i<=end;i++){
        if(inorder[i] ==val){
            return i;
        }
    }
    return -1;
}

node* postorderAndInorder(int postorder[] ,int inorder[] , int start , int end){
    static int idx =end- start;
    if(start> end) return NULL;

    int val =postorder[idx];
    idx--;
    node* curr = new node(val);
    if(start ==end){
        return curr;
    }

    int pos = search(inorder ,start,end,val);
    curr->right = postorderAndInorder(postorder,inorder,pos+1,end);
    curr->left = postorderAndInorder(postorder,inorder,start,pos-1);

    return curr;
}

void Inorder(struct node* root){
    if(root == NULL) return ;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
    
}

int main(){
    int postorder[] = {4,2,5,3,1};
    int inorder[] ={4,2,1,5,3};

    node* root  = postorderAndInorder(postorder, inorder, 0,4);
    Inorder(root);
    

    
    return 0;
}