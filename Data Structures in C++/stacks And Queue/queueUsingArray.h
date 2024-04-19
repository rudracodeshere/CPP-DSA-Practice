template<typename T>
class QueueUsingArray{
    T * data;
    int size;
    int capacity;
    int firstInd;
    int nextInd;
    public:
    QueueUsingArray(){
        data = new T[4];
        size = 0;
        capacity = 4;
        firstInd = -1;
        nextInd = 0;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size == 0;
    }
    void enqueue(T element){
        if(size == 0){
            data[nextInd]= element;
            firstInd = nextInd;
            nextInd = (nextInd + 1) % capacity;
            size++;
        }
        else if(size == capacity){
            T *newData = new T[2*capacity];
            int j = 0;
            for(int i = firstInd; i < capacity; i++){
                newData[j] = data[i];
                j++;
            }
            for(int i = 0; i < firstInd; i++){
                newData[j] = data[i];
                j++;
            }
            delete [] data;
            data = newData;
            firstInd = 0;
            nextInd = capacity;
            capacity *= 2;
            data[nextInd] = element;
            nextInd = (nextInd + 1) % capacity;
            size++;
        }
        else{
            data[nextInd] = element;
            nextInd = (nextInd + 1) % capacity;
            size++;
        }
    }
    T front(){
        if(size == 0){
            cout << "Queue is empty" << endl;
            return 0;
        }
        return data[firstInd];
    }
    T dequeue(){
        if(size == 0){
            cout << "Queue is empty" << endl;
            return 0;
        }
        T ans = data[firstInd];
        firstInd = (firstInd + 1) % capacity;
        size--;
        if(size == 0){
            firstInd = -1;
            nextInd = 0;
        }
        return ans;
    }

};