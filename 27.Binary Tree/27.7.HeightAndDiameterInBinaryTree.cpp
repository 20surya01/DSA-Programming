#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
}; 

//Height It is the depth of the tree's deepest node
int calcHeight(node* root){
    if(root == NULL) return 0;
    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);

    return max(lHeight ,rHeight) + 1;
}//time complexity= O(n)

//Diameter :- Number of nodes in the longest path between any 2 leaves
int calcDiameter(node* root){
    if(root ==NULL) return 0;
    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);

    int currDiameter = lHeight + rHeight +1;
    int lDiameter = calcDiameter(root->left);
    int rDiameter = calcDiameter(root->right);

    return max(currDiameter ,max(lDiameter ,rDiameter)); 
}//time complexity = O(n) * O(n) = O(n^2)

int OptimisedCalcDia(node* root ,int* height){
    if(root ==NULL){
        *height =0;
        return 0;
    }
    int lh = 0, rh =0;
    int lDiameter =OptimisedCalcDia(root->left ,&lh);
    int rDiameter =OptimisedCalcDia(root->right ,&rh);

    int currDiameter =lh+rh+1 ;
    *height = max(lh,rh) +1;
    return max(currDiameter ,max(lDiameter ,rDiameter));
}//time complexity = O(n) 


int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);
    // root->left->left->left= new node(8);

    cout<<calcHeight(root)<<endl;
    cout<<calcDiameter(root)<<endl;
    int height =0;
    cout<<OptimisedCalcDia(root,&height);
    return 0;
}