#include<iostream>
using namespace std;
#include "Node.cpp"

void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}



Node * takeInput(){
    int data;
    Node *head = NULL;
    Node *tail = NULL;
    cin>>data;
    while(data!=-1){
        Node * newNode  = new Node(data);
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

int length(Node *head)
{
	int l = 0;
    Node *temp = head;
    while(temp!=NULL){
        l++;
        temp = temp->next;
    }

    return l;
}

void printIthNode(Node *head, int i)
{
    Node *temp = head;
	int tempI = 0;

	while(tempI!=i && temp!=NULL){
		tempI++;
		temp=temp->next;
	}

if(temp == NULL){
	return;
}

	cout<<temp->data;
}



Node * insertAtI(Node *head, int i , int data){
    Node *res = new Node(data);
    if(i == 0){
        res->next = head;
        head = res;
        return head;
    }
    Node *temp = head;
    int count = 0;
    while(count<i-1&&temp!=NULL){
        temp = temp->next;
        count++;
    }
    if(temp!=NULL){
    res->next = temp->next;
    temp->next = res;
    }
    return head;
}
Node *deleteNode(Node *head, int pos)
{
    if(head == NULL){
        return head;
    }
   if(pos == 0){
	   Node * temp = head;
	   head = head->next;
	   delete temp;
	   return head;
   }

	int count = 0;
	Node * temp = head;
	while(count<pos-1 && temp!= NULL){
		temp=temp->next;
		count++;
	}
	if(temp != NULL&&temp->next!=NULL){
		Node *a = temp->next;
        Node * b = a->next;
        temp->next = b;
        delete a;
       
	}
    return head;
}

int length(Node *head) {
    if(head == NULL){
		return 0;
	}
	return 1+length(head->next);
}

Node* InsertNode(Node *head, int pos, Node* newNode) {
    if (head == NULL) {
        return newNode;
    }

    if (pos == 0) {
        newNode->next = head;
        return newNode;
    }

    head->next = InsertNode(head->next, pos - 1, newNode);
    return head;
}
Node *deleteNodeRec(Node *head, int pos) {
	if (head == NULL) {
        return head;
    }

    if (pos == 0) {
        Node * a = head->next;;
		delete head;
		return a;
    }

    head->next = deleteNodeRec(head->next, pos - 1);
    return head;
}
int main(){
    // static
    // Node n1(10);
    // Node * head = &n1;
    // Node n2(2);
    // n1.next = &n2;
    // cout<<head->data<<endl;;

    //dynamic
    // Node *n1 = new Node(1);
    // Node * head = n1;
    // Node *n2 = new Node(2);
    // n1->next = n2;
    // Node *n3 = new Node(3);
    // n2->next = n3;
    // Node *n4 = new Node(4);
    // n3->next = n4;
    // Node *n5 = new Node(5);
    // n4->next = n5;
    // print(head);

    Node * head = takeInput();
    print(head);
    head = deleteNode(head,  5);
    print(head);
}