#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next =NULL;
    }

};

void insertAtTail(node* &head ,int val){
    node* n =new node(val);

    if(head ==NULL){
        head = n;
        return;
    }

    node* temp =head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next =n;
}

node* reverse(node* &head){              //itretive way of reversing a linked list
    node* currptr =head;
    node* nxtptr ;
    node* prvptr =NULL;

    while(currptr != NULL){
        nxtptr = currptr->next;
        currptr->next = prvptr;

        prvptr = currptr;
        currptr = nxtptr;
    }
    return prvptr;

}

node* reverseRecursive(node* &head){
    if(head ==NULL || head->next ==NULL){
        return head;
    }
    node * newhead = reverseRecursive(head->next);
    head->next->next=head;
    head->next =NULL;

    return newhead;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
void deletAtHead(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}
// void deletAtTail()

void deletion(node* &head,int val){

    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        deletAtHead(head);
        return;
    }
    if(head->data ==val){
        deletAtHead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data!=val){
        temp =temp->next;
    }
    node* todelet = temp->next;
    temp->next = temp->next->next;
    delete todelet;
}
/*
but here it cannot delet the starting and end element ,this is because 
when we try for first element then we cannot find that as we are searching for n-1 th element
and if we try for last then also we only can acess till last -1th element

for this problem we introduce a cornor concept
*/

int main(){
    node* head = NULL;
    insertAtTail(head,2); 
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    node* newhead = reverse(head);
    display(newhead);
    node* newhead2 = reverseRecursive(newhead);
    display(newhead2);

    return 0;
}