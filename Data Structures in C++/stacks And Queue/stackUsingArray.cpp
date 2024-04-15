#include<climits>
class stackUsingArray{
int *data;
int capacity;
int nextInd;
public:
stackUsingArray(){
    data = new int[4];
    capacity = 4;
    nextInd = 0;
}
int size(){
    return nextInd;
}
bool isEmpty(){
    return nextInd == 0;
}
void push(int element){
    if(nextInd == capacity){
        int *newData = new int[2*capacity];
        for(int i = 0; i < capacity; i++){
            newData[i] = data[i];
        }
        delete [] data;
        data = newData;
        capacity *= 2;
    }
    data[nextInd] = element;
    nextInd++;
}
int pop(){
    if(isEmpty()){
        return INT_MIN;
    }
    nextInd--;
    return data[nextInd];
}
int top(){
    if(isEmpty()){
        return INT_MIN;
    }
    return data[nextInd - 1];
}




};