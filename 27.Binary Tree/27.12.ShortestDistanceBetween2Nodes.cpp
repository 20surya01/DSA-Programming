/*
Question 
find the distance between two nodes in a BT .
The distance two nodes is the minimum number of 
edges to be transversed to reach one node from another.

Strategy
1.Find the LCA (lowest common ancestor)
2.Find distance of n1(d1) & n2(d2) from LCA
3.return (d1+d2)
*/


#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left ;
    node* right;
    node(int val){
        data = val;
        left=NULL;
        right =NULL;
    }
};

node* LCA(node* root,int n1,int n2){
    if(root== NULL) return NULL;

    if(root->data==n1|| root->data==n2){
        return root;
    }
    node* left= LCA(root->left,n1,n2);
    node* right = LCA(root->right ,n1,n2);
 
    if(left!=NULL and right!=NULL){
        return root;
    }
    if(left==NULL and right==NULL){
        return NULL;
    }
    if(left!=NULL){
        return LCA(root->left,n1,n2);
    }
    return LCA(root->right,n1,n2);
    
}
int findDistance(node *root,int n1,int n2){
    if(root==NULL){
        return -1;
    }
    if(root->data==k){
        return dist;
    }
    int left = findDistance(root->left ,k,dist+1);
    if(left)
}
int distbtwNodes(node *root ,int n1,int n2){
    node *lca = LCA(rot ,n1,n2);

    int d1 = findDistance(lca,n1,0);
    int d2 = findDistance(lca,n2,0);
    return d1+d2;
}

   
int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    return 0;
}