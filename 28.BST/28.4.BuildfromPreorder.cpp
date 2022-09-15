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
    if(*preorderIdx>=n) return NULL;
    node* root =NULL;
    if(key >min &&key <max){
        root = new node(key);
        *preorderIdx ++;
        if(*preorderIdx<n){
            root->left=constructBST(preoder,preorderIdx,preoder[*preorderIdx],min,key,n);
        }
        if(*preorderIdx<n){
            root->right=constructBST(preoder,preorderIdx,preoder[*preorderIdx],key,max,n);
        } 
    }

    return root; 

}
void display(node* root){
    if(root == NULL) return;
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}
int main(){
    int preoder[]={10,2,1,13,11};
    int n =5;
    int *preorderIdx =0;
    node* root = constructBST(preoder,preorderIdx,preoder[0],INT_MIN,INT_MAX,n);
    display(root);
    return 0;
}