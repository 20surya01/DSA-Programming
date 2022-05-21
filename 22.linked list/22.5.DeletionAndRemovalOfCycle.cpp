/*
Floyd's algroithms 
hare and tortoise algorithms
*/

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtHead(node* &head , int val){
    node* n =new node(val);
    n->next = head;
    head = n;
}
void display(node* head){
    node* temp =head;
    while(temp !=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
bool findCycle(node* &head){
    node* fast =head;
    node* slow = head;

    while((fast!=NULL)&&(fast->next!=NULL)){
        slow = slow->next;
        fast = fast->next->next;
        if(fast ==slow)
            return true;

    }
    return false;
}
void makeCycle(node* head ,int pos){
    node* temp = head;
    node* startNode;

    int count =1;
    while(temp ->next !=NULL){
        if(count ==pos){
            startNode =temp;
        }
        temp =temp->next;
        count ++ ;
    }
    temp->next =startNode;
}
void removeCycle(node* &head){
    node* fast =head;
    node* slow = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow!=fast ||fast->next ==NULL ||fast->next->next ==NULL);
    
    if(fast->next ==NULL || fast->next->next==NULL){
        return;
    }
    fast = head;
    while(slow->next!=fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next =NULL;
    
}
int main(){
    node* head = NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    display(head);
    cout<<findCycle(head)<<endl;
    makeCycle(head,3);
    // display(head);
    cout<<findCycle(head)<<endl;
    removeCycle(head);
    display(head);
    cout<<findCycle(head)<<endl;
    removeCycle(head);
    return 0;
}