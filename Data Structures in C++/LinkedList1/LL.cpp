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

int findNode(Node *head, int n) {
    if (head == NULL) {
        return -1;
    }
    if (head->data == n) {
        return 0;
    }
    int result = findNode(head->next, n);
    if (result != -1) {
        return result + 1;
    }
    return -1;
}Node *appendLastNToFirst(Node *head, int n)
{
	int length = 0;
	Node *temp = head;
	Node * lastNode ;

	while(temp!=NULL){
		if(temp->next == NULL){
			lastNode = temp;
		}
		temp = temp->next;
		length++;
	}

    if(head == NULL|| n ==  0 || n==length){
		return head;
	}

	else{
		temp = head;

		for(int i = 0;i<length-n-1;i++){
			temp=temp->next;
		}

	Node * start = temp->next;
	temp->next = NULL;
	lastNode ->next = head;
	return start;

	}
}Node *removeDuplicates(Node *head)
{ if(head == NULL){ return head; }
Node * prev = head;
Node * curr = head->next;
while(curr!=NULL)
{ if(prev->data==curr->data)
{ prev->next = curr->next;
delete curr;
curr = prev->next; }
else{ curr = curr->next;
prev = prev->next; }
 }
return head; }

void printReverse(Node *head)
{
	if(head == NULL){
		return;
	}

	printReverse(head ->next);
	cout<<head->data<<" ";
}

bool isPalindrome(Node *head) {
    if (head == NULL || head->next == NULL) {
        return true;
    }

    int length = 0;
    Node *temp = head;
    while (temp != NULL) {
        temp = temp->next;
        length++;
    }

    int mid = length / 2;
    temp = head;
    Node *firstEnd = nullptr;
    for (int i = 0; i < mid; i++) {
        temp = temp->next;
    }
    if (length % 2 == 0) {
        firstEnd = temp;
    } else {
        firstEnd = temp->next;
    }

    Node *prev = nullptr;
    Node *curr = firstEnd;
    Node *next = nullptr;
    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    Node *left = head;
    Node *right = prev;
    while (right != nullptr) {
        if (left->data != right->data) {
            return false;
        }
        left = left->next;
        right = right->next;
    }

    return true;
}

Node *midPoint(Node *head)
{
	if(head == NULL){
		return head;
	}
    Node *slow = head;
	Node * fast = head->next;
	while(fast!=NULL&&fast->next!=NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}


bool detectCycle(Node *head)
{
	Node * slow= head;
    Node * fast = head->next;
    while(fast!=NULL   && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){
            return true;;
        }
    }

    return false;
}

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2) {
    if (head1 == NULL) {
        return head2;
    }
    if (head2 == NULL) {
        return head1;
    }

    Node *fh = NULL;
    Node *ft = NULL;

    if (head1->data < head2->data) {
        fh = head1;
        ft = head1;
        head1 = head1->next;
    } else {
        fh = head2;
        ft = head2;
        head2 = head2->next;
    }

    while (head1 != NULL && head2 != NULL) {
        if (head1->data < head2->data) {
            ft->next = head1;
            ft = head1;
            head1 = head1->next;
        } else {
            ft->next = head2;
            ft = head2;
            head2 = head2->next;
        }
    }

    if (head1 != NULL) {
        ft->next = head1;
    }
    if (head2 != NULL) {
        ft->next = head2;
    }

    return fh;
}
Node* reverseLinkedListRec(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* newHead = reverseLinkedListRec(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

bool palindromeDLL(Node* head){

	if(head==NULL || head->next==NULL){
		return true;
	}


    Node *last = head;

	while(last->next!=NULL){
		last = last->next;
	}

	Node *first = head;

	while(first!=last&&first->prev!=last){
		if(first->data!=last->data){
			return false;
		}
		else{
			first = first->next;
			last = last->prev;
		}
	}

	return true;
}

int findNodeRec(Node *head, int n)
{
	if(head==NULL){
		return -1;
	}

	if(head->data == n){
		return 0;
	}
	else{
		int ans=findNodeRec(head->next,n);
		if(ans==-1){
			return -1;
		}
		else{
			return 1 + ans;
		}
	}
}

Node *evenAfterOdd(Node *head) {
    Node *odd = NULL;
    Node *even = NULL;
    Node *evenHead = NULL;
    Node *oddHead = NULL;
    Node *temp = head;


    while (temp != NULL) {
        if (temp->data % 2 == 0) {
            if (even == NULL) {
                even = temp;
                evenHead = even;
            } else {
                even->next = temp;
                even = even->next;
            }
        } else {
            if (odd == NULL) {
                odd = temp;
                oddHead = odd;
            } else {
                odd->next = temp;
                odd = odd->next;
            }
        }
        temp = temp->next;
    }

    if (oddHead == NULL) {
        return evenHead;
    }

    if (evenHead == NULL) {
        return oddHead;
    }

    odd->next = evenHead;
    even->next = NULL;

    return oddHead;
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
