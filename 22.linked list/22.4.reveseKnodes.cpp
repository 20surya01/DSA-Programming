/*
1 -> 2 -> 3 -> 4 -> 5 -> 6->NULL      qus

let k=2

2 -> 1 -> 4 -> 3 -> 6 -> 5 ->NULL       sol
*/
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data ;
    node* next ;
    node(int val){
        data = val;
        next =NULL;
    }
};

void insertAtTail(node* &head ,int val){
    node* n = new node(val);

    if(head ==NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next =n;

}
node* reverseKnode(node* &head ,int k){
    node* prvptr= NULL;
    node* curptr = head;
    node* nxtptr ;
    int i =0;
    while(i<k && curptr !=NULL){
        nxtptr =curptr->next;
        curptr->next = prvptr;

        prvptr = curptr;
        curptr = nxtptr;
        i++;
    }
    if(nxtptr!=NULL)
        head->next = reverseKnode(nxtptr,k);
    return prvptr;
}

void display(node* head){
    node* temp = head;
    while(temp !=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    
    node* head =NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,4);
    // insertAtTail(head,5);
    display(head);
    node* newhead = reverseKnode(head,2);
    display(newhead);
    
    return 0;
}