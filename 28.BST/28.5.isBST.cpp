#include<bits/stdc++.h>
using namespace std;

struct node{
    int data ;
    node* left;
    node* right;
    node(int val){
        data =val;
        left = NULL ;
        right = NULL;
    }
};

//check for bst;
bool isBST(node* root, node* min ,node* max){
    if(root == NULL){
        return true;
    }
    if(min != NULL and root->data<=min->data){
        return false;
    }
    if(max != NULL and root->data>=max->data){
        return false;
    }
    bool leftvalid = isBSt(root->left ,min, root);
    bool rightvalid =isBSt(root->right,root ,max);
    return leftvalid and rightvalid;
}

int main(){
    
    return 0;
}