#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data =val;
        left =NULL;
        right =NULL;
    }
};

node* insertBST(node* root ,int val){
    if(root == NULL){
        return new node(val);
    }
    if(root->data>val){
        root->left =insertBST(root->left,val);
    }
    else{
        root->right =insertBST(root->right,val);
    }
    return root;
}

node* constructBST(int preoder[],int* preorderIdx ,int key ,int min ,int max,int n){
    node* root =NULL;
    if(key >min &&key <max){
        root = new node(key);
    }
    return root; 

}

int main(){
    
    return 0;
}