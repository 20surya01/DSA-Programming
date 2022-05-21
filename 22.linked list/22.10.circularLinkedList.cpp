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
void insertAtHead(node* &head,int val){
    node* n =new node(val);
    if(head==NULL){
        n->next =n;
        head =n;
    }
    node* temp =head;
    while(temp->next!=head){
        temp =temp->next;
    }
    temp->next =n;
    n->next =head;
    head =n;
}

void insertAtTail(node* &head ,int val){
    node* n =new node(val);

    if(head ==NULL){
        insertAtHead(head,val);
        return;
    }

    node* temp =head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next =n;
    n->next =head;
}
void deletAtHead(node* &head){
    node* temp =head;
    while(temp->next!=head){
        temp =temp->next;
    }
    node* todelete = head;
    temp->next=head->next;
    head = head->next;
    delete todelete;
}
void deleteNode(node* &head,int pos){
    if(pos==1){
        deletAtHead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(count!=pos-1){
        temp =temp->next;
        count++;
    }
    node* todelet =temp->next;
    temp->next=temp->next->next;
    delete todelet ;
    
}
int length(node* head){
    node* temp =head;
    int count =0;
    do{
        count++;
        temp =temp->next;
    }while(temp!=head);
    return count;
}
int searching(node *head,int val){
    node *temp =head;
    int pos =1;
    do
    {
        if(temp->data==val){
            return pos;
        }
        temp =temp->next;
        pos++;

    }while(temp!=head);
    return -1;
}
void display(node* head){
    node* temp = head;
    int count=2*length(head);
    do
    {
        cout<<temp->data<<"->";
        temp =temp->next;
        
    } while (count--);
    
    cout<<endl;
}

int main(){
    node* head = NULL;
    insertAtTail(head,2); 
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    deleteNode(head,1);
    display(head);
    cout<<searching(head,5);
    
    return 0;
}