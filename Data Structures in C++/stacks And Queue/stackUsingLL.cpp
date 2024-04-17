class Stack {
	// Define the data members
    int size;
    Node * head;
   public:
    Stack() {
        head = NULL;
        size = 0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return size == 0;
    }

    void push(int element) {
        // Implement the push() function
            Node * temp= new Node(element);
            temp->next = head;
            head = temp;
        size++;
    }

    int pop() {
        // Implement the pop() function
        if(head == NULL){
            return -1;
        }
        int res = head->data;
        Node * temp = head;
        head = head->next;
        delete temp;
        size--;
        return res;
    }

    int top() {
        // Implement the top() function
              if(head == NULL){
            return -1;
        }
        return head->data;
    }
};