void reverseStack(stack<int> &input, stack<int> &extra) {
    if(input.empty()) {
        return;
    }
    int n = input.size();
    for(int i = 0; i < n; i++) {

        while(!input.empty()) {
            extra.push(input.top());
            input.pop();
        }

        int last = extra.top();
        extra.pop();

        for(int j = 0; j < n - i - 1; j++) {
            input.push(extra.top());
            extra.pop();
        }

        extra.push(last);
    }

    while(!extra.empty()) {
        input.push(extra.top());
        extra.pop();
    }
}


#include<queue>
void reverseQueue(queue<int> &input) {
	if(input.size()==0||input.size()==1){
		return;
	}
	int last = input.front();
	input.pop();
	reverseQueue(input);
	input.push(last);
}

#include<stack>
bool checkRedundantBrackets(string expression) {
	stack<char> s;
	for(int i = 0;i<expression.size();i++){
		if(expression[i]=='('){
			s.push('(');
		}
		else if(expression[i]=='+'||expression[i]=='-'||expression[i]=='*'||expression[i]=='/'){
			s.push(expression[i]);
		}
		else if(expression[i]==')'){
			if(s.top()!='+'&&s.top()!='*'&&s.top()!='-'&&s.top()!='/'){
				return true;;
			}
			else{
				s.pop();
				s.pop();
			}
		}
	}
	return false;
}


void calculateSpan(int prices[], int n, int spans[]) {
    stack<int> s;
    s.push(0);
    spans[0]=1;
    for(int i = 1;i<n;i++){
        if(prices[i]<prices[s.top()]){
            s.push(i);
            spans[i]=1;
        }

        else{
            while(!s.empty()&&prices[s.top()]<prices[i]){
                s.pop();
            }
            if(s.empty()){
                spans[i]=i+1;
                s.push(i);
            }
            else{
                spans[i]=i-s.top();
                s.push(i);
            }
        }
    }
}

#include<stack>
int countBracketReversals(string input) {
	// Write your code here
	stack<char> s;
	int count = 0;

	if(input.size()%2!=0){
		return -1;
	}
	for(int i = 0;i<input.size();i++){
		if(input[i]=='{'){
			s.push('{');
		}
		else{
			if(s.empty()){
                 s.push('}');
             }
			else if (!s.empty() && s.top() == '{'){
				s.pop();
			}
			else{
				 s.push('}');
				}
    	 }
	}
	while(!s.empty()){
		char s1 = s.top();
		s.pop();
		char s2 = s.top();
		s.pop();
		if(s1==s2){
			count+=1;
		}
		else{
			count+=2;
		}
	}
	return count;
}

/**********

 Following is the main function we are using internally.
 Refer this for completing the Dequeue class.


 int main()
 {
 Deque dq(10);
 int choice,input;
 while(true) {
 cin >> choice;
 switch (choice) {
 case 1:
 cin >> input;
 dq.insertfront(input);
 break;
 case 2:
 cin >> input;
 dq.insertrear(input);
 break;
 case 3:
 dq.deletefront();
 break;
 case 4:
 dq.deleterear();
 break;
 case 5:
 cout << dq.getFront() << "\n";
 break;
 case 6:
 cout << dq.getRear() << "\n";
 break;
 default:
 return 0;
 }
 }

 return 0;
 }

 ************/

#include <iostream>
using namespace std;

class Deque {
private:
    int* arr;
    int front;
    int rear;
    int capacity;

public:
    Deque(int size) {
        capacity = size;
        arr = new int[capacity];
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return (front == 0 && rear == capacity - 1) || (front == rear + 1);
    }

    bool isEmpty() {
        return front == -1;
    }

    void insertFront(int element) {
        if (isFull()) {
            cout << "-1" << endl;
            return;
        }
        if (front == -1) {
            front = rear = 0;
        } else if (front == 0) {
            front = capacity - 1;
        } else {
            front--;
        }
        arr[front] = element;
    }

    void insertRear(int element) {
        if (isFull()) {
            cout << "-1" << endl;
            return;
        }
        if (front == -1) {
            front = rear = 0;
        } else if (rear == capacity - 1) {
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = element;
    }

    void deleteFront() {
        if (isEmpty()) {
            cout << "-1" << endl;
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else {
            if (front == capacity - 1) {
                front = 0;
            } else {
                front++;
            }
        }
    }

    void deleteRear() {
        if (isEmpty()) {
            cout << "-1" << endl;
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else {
            if (rear == 0) {
                rear = capacity - 1;
            } else {
                rear--;
            }
        }
    }

    int getFront() {
        if (isEmpty()) {
            return -1;
        }
        return arr[front];
    }

    int getRear() {
        if (isEmpty()) {
            return -1;
        }
        return arr[rear];
    }
};



