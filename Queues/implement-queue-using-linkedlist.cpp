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
class Queue {
    Node* start,*end;
    int size;

    public:
        Queue() {
            start = nullptr;
            end = nullptr;
            size = 0;
        }

    void push(int x) {
        Node* element = new Node(x);
        if(start == nullptr) {
            start = end = element;
        } else {
            end->next = element;
            end = element;
        }
        size++;
    }
    int pop() {
        if(start == nullptr) return -1;
        Node* temp = start;
        int val = temp->data;
        start = start->next;
        delete temp;
        size--;
        return val;
    }
    int top() {
        if(start==nullptr) return -1;
        return start->data;
    }
    int Size() {
        return size;
    }
};
int main() {
    Queue q;
    q.push(7);
    q.push(23);
    q.push(11);
    q.push(9);
    cout << "The size of the queue before deleting is : " << q.Size() << endl;
    cout << "POP element" << q.pop() << endl;
    cout << "Top element" << q.top() << endl;
    cout << "size: " << q.Size() << endl;

}
