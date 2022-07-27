/*
ALGORITHM
1. pick element from preorder &   creat a node
2. increment preorder idx
3. search for picked element's pos in inorder
4. call to build left subtree from inorder's 0 to pos-1
5. call t build right subtree from inorder's pos+1 to n
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
int search(int inorder[],int start ,int end ,int curr){
    while(!(start==end) and !(inorder[start] == curr)){
        start++;
    }
    return start;
}


node* buildTree(int preorder[] , int inorder[] ,int start , int end){

    static int idx = 0;
    if(start>end){
        return NULL;
    }

    int curr = preorder[idx] ;
    idx++ ;
    node* Node = new node(curr) ;
    if(start == end) return Node ;
    int pos = search(inorder , start , end ,curr) ;
    Node->left = buildTree(preorder,inorder,start ,pos-1) ;
    Node->right = buildTree(preorder,inorder,pos+1 ,end) ;
    return Node ;
}

void Inorder(struct node* root){
    if(root == NULL) return ;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
    
}

int main(){
    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};
    node* root = buildTree(preorder,inorder,0,4);
    Inorder(root);


}
