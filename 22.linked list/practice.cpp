#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next=NULL;
    }
};

void insertAtHead(node* &head,int val){
    node* n = new node(val);
    if(head ==NULL){
        head = n;
        return;
    }
    n->next = head;
    head = n;
}

void display(node* head){
    node* temp =head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head = NULL;
    insertAtHead(head,1);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,6);
    insertAtHead(head,2);
    display(head);
    return 0;
}
