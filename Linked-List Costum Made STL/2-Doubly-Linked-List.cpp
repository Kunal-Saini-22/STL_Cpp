#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
};

Node* insertAtBegin(Node* head,int x){
    Node *temp = new Node(x);
    temp->next = head;
    if(head!=NULL){
        head->prev = temp;
    }
    
    return temp;
}
Node *insertAtEnd(Node *head,int x){
    Node *temp = new Node(x);
    if(head==NULL){
        return temp;
    }
    Node *curr=head;
    while(curr->next!=NULL){
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}

Node* insert(Node *head,int x,int pos){
    Node *temp = new Node(x);
    Node *curr = head;
    if(pos==1){
        head = insertAtBegin(head, x);
        return head;
    }
    pos = pos - 1;
    while(pos!=0 && curr->next!=NULL){
        curr = curr->next;
        pos--;
    }
    if(curr->next==NULL){
        head = insertAtEnd(head, x);
        return head;
    }
    curr->prev->next = temp;
    temp->prev = curr->prev;
    temp->next = curr;
    curr->prev = temp;
    return head;
}

Node* reverse(Node *head){
    Node *curr = head;
    Node *temp = NULL;
    if(head->next==NULL){
        return head;
    }
    while(curr!=NULL){
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }
    return temp->prev;
}


Node* deleteHead(Node *head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }else{
        Node *curr = head;
        head = head->next;
        head->prev = NULL;
        delete curr;
        return head;
    }
}

Node* deleteLast(Node *head){
    Node *curr = head;
    while(curr->next!=NULL){
        curr = curr->next;
    }
    curr->prev->next = NULL;
    return head;
}

Node* deleteNode(Node* head,int pos){
    if(pos==1){
        head = deleteHead(head);
        return head;
    }
    pos = pos - 1;
    Node *curr = head;
    while(pos!=0){
        curr = curr->next;
        pos--;
    }
    if(curr->next==NULL){
        head = deleteLast(head);
        return head;
    }
    Node *temp = curr;
    curr = curr->prev;
    curr->next = curr->next->next;
    curr->next->prev = curr;
    delete temp;
    return head;
}
void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
int main(){
    Node *head = NULL;
    head=insertAtEnd(head,4);
    head = insertAtEnd(head, 15);
    head = insertAtEnd(head, 7);
    head = insertAtEnd(head, 40);
    head = insert(head, 25, 1);
    printList(head);
    head = deleteNode(head, 5);
    printList(head);
    return 0;
}