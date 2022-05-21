#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* previous;
    node(int val){
        data= val;
        next =NULL;
        previous =NULL;
    }

};

void insertAtTail(node* &head ,int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return ;
    }
    node* temp = head;
    while(temp->next !=NULL){
        temp = temp->next;
    }
    temp->next =n ;
}

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next =head;
    head =n;
}

node* reverse(node* &head){
    node* curptr = head;
    node* nextptr ;
    node* prvptr =NULL;

    while(curptr !=NULL){
        nextptr = curptr->next;
        curptr->next = prvptr;
        prvptr = curptr ;
        curptr =nextptr;
    }
    return nextptr;


}
node* reverseRecus(node* &head){
    if(head ==NULL||head->next==NULL){
        return head;
    }
    node* newNode =reverseRecus(head->next);
    head->next->next =head;
    head->next =NULL ;
    return newNode;  
}
node* reverseKNode(node* &head,int k){
    node* curptr =head;
    node* nxtptr ;
    node* prvptr =NULL;

    int i =0;
    while(i<k && curptr!=NULL){
        nxtptr =curptr->next;
        curptr->next =prvptr;

        prvptr =curptr;
        curptr =nxtptr;
        i++;
    }
    if(nxtptr!=NULL) head->next = reverseKNode(nxtptr,k);
    return prvptr;
}

bool search(node* &head,int val){
    node* temp = head;
    while(temp != NULL){
        if(temp->data == val){
            return true ;
        }
    }
    return false ;

}

bool findCycle(node* head){
    node* fast =head;
    node* slow =head;

    while((fast!= NULL)&& (fast->next!= NULL)){
        slow =slow->next;
        fast =fast->next->next;
        if(fast==slow){
            return true;
        }

    }
    return false;
}

void makeCycle(node* &head, int pos){
    node* temp = head; 
    node* startNode ;

    int count =1;
    while(temp->next!=NULL){
        if(count == pos){
            startNode =temp;
        }
        temp =temp->next;
        count++;
    }
    temp->next =startNode;
}

void removeCycle(node* &head){
    node* fast = head;
    node* slow = head;

    do
    {
        slow  =slow->next;
        fast =fast->next->next;
    } while (slow!=fast||fast->next !=NULL);
    if(fast->next ==NULL || fast->next->next ==NULL){
        return; 
    }
    fast =head;
    while(slow->next!= fast->next){
        slow= slow->next;
        fast = fast->next;
    }
    slow->next =NULL;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp =temp->next;
    }
    cout<<"NULL"<<endl;
}



int main(){
    node* head =NULL;
    
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    node* temp =head;
    

    display(head);
    
    
    return 0;
}