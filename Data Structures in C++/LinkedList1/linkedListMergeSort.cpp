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

Node *skipMdeleteN(Node *head, int M, int N) {
    if (M == 0) {
        return NULL;
    }
    int mPointer = 0;
    int nPointer = 0;
    Node *m = head;
    Node *n;

    while (m != NULL) {
        for (mPointer = 0; mPointer < M - 1&&m!=NULL; mPointer++) {

            m = m->next;
        }

         if (m == NULL) {

            return head;

        } 
        n = m->next;
        for (nPointer = 0; nPointer < N && n != NULL; nPointer++) {
            Node *temp = n;
            n = n->next;
            delete temp;
        }

        m->next = n;
        m = n;
    }

    return head;
}
Node *swapNodes(Node *head, int i, int j)
{
	Node * first = head;
	Node *firstPrev = NULL;
	Node *firstNext = NULL;
	
	int f = 0;
	while(f<i){
		if(f==i-1){
			firstPrev = first;
		}
		first = first->next;
		f++;
	}
	

	Node * second = head;
	Node *secondPrev = NULL;
	Node *secondNext = NULL;
	int l = 0 ;
	while(l<j){
				if(l==j-1){
			secondPrev = second;
		}
		second = second->next;
		l++;
	}

if(i == j-1){
	secondNext = second->next;
	firstPrev->next = second;
	first->next = secondNext;
	second->next = first;
} else {
        firstNext = first->next;
        secondNext = second->next;
        first->next = secondNext;
        second->next = firstNext;
        secondPrev->next = first;
		if(i==0){
			head = second;
                } else {
                        firstPrev->next = second;
                }
}
return head;
}

Node *rotate(Node *head, int k) {
     if(k == 0){
          return head;
     }
     Node * tail;
     Node * temp = head;
     int length = 0;
     while(temp!=NULL){
          temp = temp->next;
          length++;
     }
    if(length == k||length == 1||length == 0||k%length==0){
          return head;
     }
     if(k>length){
         while(k>=length){
              k-=length;
         }
     }
     Node *newHead = head;
     for(int i = 0;i<length-k;i++){
          if(i == length-k-1){
               tail = newHead;
          }
          newHead=newHead->next;
     }
     temp = newHead;

     while (temp->next != NULL) {
          temp = temp->next;
     }

     temp->next = head;
     head = newHead;
     tail->next = NULL;
     return head;
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

Node* bubbleSort(Node* head) {
    int length = 0;
    Node* temp = head;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }

    for (int i = 0; i < length; i++) {
        Node * prev = NULL;
        Node * curr = head;
        while(curr->next!=NULL){
            if(curr->data>curr->next->data){
                if(prev!=NULL){
                    Node * temp = curr->next;
                    curr->next = curr->next->next;
                    prev->next = temp;
                    temp->next = curr;
                    prev = temp;
                    curr = temp->next;
                }
                else if(prev == NULL){
                    Node * temp = head->next;
                    head->next = head->next->next;
                    temp->next = head;
                    head = temp;
                    prev = head;
                    curr = head->next;
                }
            }
            else{
                prev = curr;
                curr=curr->next;
            }
        }
    }

    return head;
}
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