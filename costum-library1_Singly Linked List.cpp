#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next = NULL;
    }
};

void printList(Node *head)
{
    // if(head== NULL){
    //     return;
    // }
    // cout << head->data << " ";
    // printList(head->next);
    Node *curr = head;
    while(curr!=NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }
}

Node* insertAtHead(Node *head, int x){
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

Node* insertAtTail(Node *head,int x){
    Node *temp = new Node(x);
    if(head==NULL){
        return temp;
    }
    Node *curr = head;
    while(curr->next!=NULL){
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

Node* deleteHead(Node *head){
    if(head==NULL){
        return head;
    }
    Node *curr = head;
    head = head->next;
    delete (curr);
    return head;
}
Node* deleteLastNode(Node *head){
    if(head==NULL){
        return head;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node *curr = head;
    while(curr->next->next!=NULL){
        curr = curr->next;
    }
    delete curr->next;
    curr->next = NULL;
    return head;
}
Node* insert(Node *head,int pos,int x){
    Node *temp=new Node(x);
    if(pos==1){
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    for (int i = 1; i <= pos - 2 && curr != NULL;i++){
        curr = curr->next;
    }
        if (curr == NULL)
        {
            return head;
        }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

Node* del(Node *head,int x){
    Node *curr=head;
    while(curr->next->data!=x){
        curr = curr->next;
    }
    curr->next = curr->next->next;
    return head;
}

int search(Node *head,int x){
    // int pos=1;
    // Node *curr=head;
    // while(curr!=NULL){
    //     if(curr->data==x){
    //         return pos;
    //     }else{
    //         pos++;
    //         curr = curr->next;
    //     }
    // }
    // return -1;

    if(head==NULL){
        return -1;
    }
    if(head->data==x){
        return 1;
    }
    else
    {
        int res = search(head->next, x);
        if (res == -1)
            return -1;
        else
            return res + 1;
    }
}

int countNodes(Node *head){
    int n = 1;
    Node *curr = head;
    while(curr->next!=NULL){
        curr = curr->next;
        n++;
    }
    return n;
}

// int main(){
//     Node *head = NULL;
//     head=insertAtHead(head, 10);
//     printList(head);
// }
