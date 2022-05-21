#include<bits/stdc++.h>
using namespace std;

class node{
    protected:
    void print(){
        cout<<"print"<<endl;
    }
    void display(){
        cout<<"display"<<endl;
    }
    void parameterised(int val){
        cout<<"the value is "<<val<<endl;
    }
    public:
    int data;
    node* next;

    node(int val){
        data =val;
        next =NULL;
    }
};

void insertAtTail(node* &head,int val){
    node* n =new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp =head;
    while(temp->next!=NULL){
        temp =temp->next;
    }
    temp->next =n;
}
void insertAtHead(node* &head ,int val){
    node* n = new node(val);
    n->next=head;
    head = n;
}
int search(node* head,int key){
    int position=1;
    node* temp = head;
    while(temp!=NULL){
        if(temp->data ==key){
            return position;
        }
        temp = temp->next;
        position ++;
    }
    return -1;
}

void display(node* head){
    node* temp = head;
    while(temp->next !=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
        if(temp->next==NULL){
            cout<<temp->data<<"->";
        }
        
    }
    cout<<"NULL"<<endl;
}


int main(){
    int n;
    node* head = NULL;
    // for(int i =0 ; i<n ; i++){
    //     int val;
    //     cin>>val;
    //     insertAtTail(head,val);
    // }
    cin>>n;
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,1);
    insertAtTail(head,7);
    insertAtTail(head,6);
    insertAtHead(head,10);
    display(head);
    cout<<"the position of key is "<<search(head,n);
    return 0;
}