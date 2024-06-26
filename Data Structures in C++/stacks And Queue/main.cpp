#include<iostream>
using namespace std;
#include "stackUsingArray.cpp"
#include<stack>
bool isBalanced(string expression) {
  if (expression[0] == ')') {
    return false;
  }

  stack<char> s;
  for (int i = 0; i < expression.size(); i++) {
    if (expression[i] == '(') {
      s.push('(');
    } else if (expression[i] == ')') {
      if (s.empty() || s.top() != '(') {
        return false;
      } else {
        s.pop();
      }
    }
  }

  return s.empty();
}
int main(){
    stackUsingArray s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}