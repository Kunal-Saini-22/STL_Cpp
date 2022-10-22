#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
int countNodes(Node *head){
    if(head==NULL){
        return 0;
    }
    int count = 1;
    Node *curr = head->next;
    while(curr!=head){
        count++;
        curr = curr->next;
    }
    return count;
}
void printList(Node *head){
    Node *curr = head->next;
    cout << head->data << " ";
    while(curr!=head){
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
Node* insertAtHead(Node *head,int x){
    Node *temp = new Node(x);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    // Node *curr = head;
    // while(curr->next!=head){
    //     curr = curr->next;
    // }
    // temp->next = head;
    // curr->next = temp;
    // return temp;
    temp->next = head->next;
    head->next = temp;
    swap(head->data, temp->data);
    return head;
}
Node *insertAtLast(Node *head, int x){
    Node *temp = new Node(x);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    // Node *curr = head;
    // while(curr->next!=head){
    //     curr = curr->next;
    // }
    // temp->next = curr->next;
    // curr->next = temp;
    // return head; it is O(N) solution
    temp->next = head->next;
    head->next = temp;  //Tricky O(1) solution
    swap(head->data, temp->data);
    return temp;
}

Node* deleteHead(Node *head){
    Node *temp = head->next;
    head->data = head->next->data;
    head->next = head->next->next;
    delete temp;
    return head;
}

Node* deleteLast(Node *head){
    Node *curr = head->next;
    while(curr->next->next!=head){
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = head;
    delete temp;
    return head;
}

Node *deleteKthNode(Node* head,int pos){
    if(pos==1){
        head = deleteHead(head);
        return head;
    }
    pos = pos - 2;
    Node *curr = head;
    while(pos!=0 &&curr->next!=head){
        curr = curr->next;
        pos--;
    }
    if(curr->next==head){
        head = deleteLast(head);
        return head;
    }
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}
int main(){
    Node *head = NULL;
    head = insertAtLast(head, 4);
    head = insertAtLast(head, 15);
    head = insertAtLast(head, 7);
    head = insertAtLast(head, 40);
    printList(head);
    head = deleteKthNode(head, 4);
    printList(head);
    cout << countNodes(head);

    return 0;
}