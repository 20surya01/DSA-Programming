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

node* searchBst(node* root, int key){
    if(root==NULL) return NULL;
    if(root->data== key){
        return root;
    }
    if(root->data>key){
        return searchBst(root->left,key);
    }
    return searchBst(root->right,key);
}
void display(node* root){
    if(root == NULL) return;
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
} 

node* inordersuc(node* root){
    node* curr =root;
    while(curr and curr->left!=NULL){
        curr =curr->left;
    }
    return curr;
}

node* deleteInBst(node* root ,int key){
    //case 1,2
    if(key< root->data){
        root->left=deleteInBst(root->left,key);
    }
    else if(key>root->data){
        root->right =deleteInBst(root->right,key);

    }
    else{
        if(root->left ==NULL){
            node* temp= root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            node* temp =root->left;
            free(root);
            return temp;
        }
    }
    //case 3
    node* temp =inordersuc(root->right);
    root->data =temp->data;
    root->right = deleteInBst(root->right,temp->data);
    return root;
}

int main(){
    node* root =NULL;

    root =insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
    // node* newroot =searchBst(root,9);
    // display(newroot);
    root =deleteInBst(root,2);
    display(root);
    return 0;
}