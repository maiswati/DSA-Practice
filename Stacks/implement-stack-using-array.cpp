#include<bits/stdc++.h>
using namespace std;
class Stack {
    int n = 5;
    int arr[5];
    int currSize = 0;
    int top = -1;
    
    public:
    void push(int x) {
        if(currSize > n) {
            cout << "Stack is full" << endl;
        } else {
            top++;
            arr[top] = x;
            currSize++;
        }
    }
    int pop() {
        if(currSize == 0) {
            cout << "Stack is empty" << endl;
            return -1;
        } else {
            int ele = arr[top];
            top--;
            currSize--;
            return ele;
        }
    }
    int Top() {
        if(currSize == 0) {
            return -1;
        }
        return arr[top];
    }
    int size() {
        return currSize;
    }
};
int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "size : " << s.size() << endl;
    cout << "Popped element: " << s.pop() << endl;
    s.push(40);
    cout << "Popped element: " << s.pop() << endl;
    cout << "the top element is: " << s.Top() << endl;
    
}