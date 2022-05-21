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

void insertAtHead(node* &head ,int val){
    node* n = new node(val);

    if(head ==NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next !=NULL){
        temp =temp->next;
    }
    temp->next =n;

}
//1st way


void appendK(node* &head,int pos){
    node* temp =head;
    node* knode;
    int count =1;
    while(temp->next!=NULL){
        if(count ==pos){
            knode=temp;
            
        }
        temp = temp->next; 
        count++;
        
    }
    if(temp->next ==NULL){
        temp->next =head;
    }
    while(temp->next !=knode){
        temp =temp->next;
    
    }
    head = knode;
    temp->next=NULL;


}

//2nd way

int length(node* head){
    node* temp =head;
    int l =0;
    while(temp!= NULL){
        l++;
        temp =temp->next;
    }
    return l;
}

node* Kappend(node* &head,int k){
    node* newHead;
    node* newTail;
    node* tail = head;
    int l = length(head);
    int count=1;
    while(tail->next !=NULL){
        if(count==l-k){
            newTail =tail;
        }
        if(count== l-k+1){
            newHead =tail;
        }
        tail =tail->next;
        count++;
    }
    newTail->next=NULL;
    tail->next =head;
    return newHead;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp =temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head = NULL;
    insertAtHead(head,1);
    insertAtHead(head,5);
    insertAtHead(head,6);
    insertAtHead(head,3);
    insertAtHead(head,2);
    display(head);
    appendK(head,3);                  //way1
    display(head);
    node* newhead =Kappend(head,3);   //way2
    display(newhead);
    return 0;
}