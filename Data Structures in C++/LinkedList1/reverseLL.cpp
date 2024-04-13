#include<iostream>
#include "Node.cpp"

class Pair
{
public:
    Node *head;
    Node *tail;
};

Node *takeInput(){
    Node * head = NULL;
    Node * tail = NULL;
    int data;
    std::cin>>data;
    while(data!=-1){
        Node * newNode = new Node(data);
        if(head == NULL){
            head = newNode;
        }
        else{
            tail->next = newNode;
        }
        tail = newNode;
        std::cin>>data;
    }
    return head;
}

void print(Node *head){
    while(head!=NULL){
        std::cout<<head->data<<" ";
        head = head->next;
    }
    std::cout<<std::endl;
}

Pair reverseHelper(Node * head){
    if(head == NULL || head->next == NULL){
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;
    }
    Pair smallAns = reverseHelper(head->next);
    Pair ans;
    ans.head = smallAns.head;
    ans.tail = smallAns.tail;
    ans.tail->next = head;
    head->next = NULL;
    ans.tail = head;
    return ans;
}

Node * reverseLL(Node * head){
    return reverseHelper(head).head;
}

Node *reverseLinkedList(Node *head) {
        if(head==NULL|| head->next ==NULL){
			return head;
		}
	Node * prev = NULL;
	Node * next = NULL;
		while(head !=NULL){
			next = head->next;
			head->next = prev;
			prev = head;
			head = next;
		}
		return prev;
}

int main(){
    Node * head = takeInput();
    print(head);
    head = reverseLL(head);
    print(head);
    return 0;
}