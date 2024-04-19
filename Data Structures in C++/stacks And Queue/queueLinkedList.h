template <typename T>
class Node{
    public:
    T data;
    Node*next;
    Node(T data){
        this->data = data;
        next = NULL;
    }
};
template <typename T>
class QueueLinkedList{
    int size;
    Node<T>*head;
    Node<T> *tail;
    public:
    QueueLinkedList(){
        size = 0;
        head = NULL;
        tail = NULL;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size == 0;
    }
    void enqueue(T data){
        Node<T> * temp = new Node(data);
       if(size == 0){
        head = temp;
        tail = temp;
        tail->next = NULL;
       }
       else{
        tail->next = temp;
        tail = temp;
        tail->next = NULL;
       }
       size++;
    }
    T front(){
        if(size == 0){
            cout << "Queue is empty" << endl;
            return 0;
        }
        return head->data;
    }
    void dequeue(){
        if(size == 0){
            cout << "Queue is empty" << endl;
            return;
        }
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        size--;
    }

};