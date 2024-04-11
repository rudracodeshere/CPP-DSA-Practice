#include<iostream>
using namespace std;
#include "Node.cpp"
Node *takeInput(){
    Node * head = NULL;
    Node * tail = NULL;
    int data;
    cin>>data;
    while(data!=-1){
        Node * newNode = new Node(data);
        if(head == NULL){
            head = newNode;
        }
        else{
            tail->next = newNode;
        }
        tail = newNode;
        cin>>data;
    }
    return head;
}

void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}


// void mergeSort(Node * head){
//     if(head == NULL){
//         return;
//     }

//     Node *slow = head;
//     Node * fast = head->next;
//     while(fast->next!=NULL&& fast!=NULL){
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     mergeSort(head);
//     mergeSort(slow->next);
//     merge();
// }

Node* merge(Node* left, Node* right) {
    if (!left) return right;
    if (!right) return left;

    Node* result = nullptr;
    if (left->data <= right->data) {
        result = left;
        result->next = merge(left->next, right);
    } else {
        result = right;
        result->next = merge(left, right->next);
    }
    return result;
}

Node* mergeSort(Node* head) {
    if (!head || !head->next) return head;

    Node* slow = head;
    Node* fast = head->next;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* left = head;
    Node* right = slow->next;
    slow->next = nullptr;

    left = mergeSort(left);
    right = mergeSort(right);

    return merge(left, right);
}