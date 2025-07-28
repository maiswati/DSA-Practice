#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

class Stack {
    Node* top = nullptr;
    int size = 0;

public:
    void push(int x) {
        Node* ele = new Node(x);
        ele->next = top;
        top = ele;
        size++;
    }

    int pop() {
        if(top == nullptr) {
            return -1;
        }
        int el = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        size--;
        return el;
    }

    int Top() {
        if(top == nullptr) {
            return -1;
        }
        int elem = top->data;
        return elem;
    }

    bool empty() {
        if(top == nullptr) {
            return true;
        } else {
            return false;
        }
    }

    int Size() {
        return size;
    }
};

int main() {
    Stack s;
    s.push(40);
    s.push(28);
    s.push(18);
    s.push(23);
    cout << "The size of stack is: " << s.Size() << endl;
    cout << "the popped element is: " << s.pop() << endl;
    cout << "the top element is: " << s.Top() << endl;
    cout << "is is empty : " << s.empty() << endl;
    cout << "The popped element is: " << s.pop() << endl;
}
