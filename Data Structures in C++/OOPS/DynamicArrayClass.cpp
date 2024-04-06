class DynamicArray {
    int *data;
    int *nextInd; // nextInd as a pointer
    int capacity;

public:
    DynamicArray() {
        nextInd = new int; // Allocate memory for nextInd
        *nextInd = 0; // Initialize nextInd value
        data = new int[5];
        capacity = 5;
    }

    void add(int ele) {
        if (*nextInd == capacity) {
            int *newArr = new int[2 * capacity];
            for (int i = 0; i < capacity; i++) {
                newArr[i] = data[i];
            }

            delete[] data;
            data = newArr;
            capacity *= 2;
        }
        data[*nextInd] = ele;
        (*nextInd)++; // Increment the value pointed to by nextInd
    }

    void print() {
        for (int i = 0; i < *nextInd; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

};
