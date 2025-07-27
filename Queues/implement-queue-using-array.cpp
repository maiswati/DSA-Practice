#include<bits/stdc++.h>
using namespace std;
class Queue {
    int size;
    int currSize;
    int * arr;
    int start;
    int end;

    public: 
        Queue() {
            size = 4;
            currSize = 0;
            arr = new int[size];
            start = -1;
            end = -1;
        }
    void push(int x) {
        if(start == -1 && end == -1) {
            start = 1;
            end = 1;
            currSize++;
            arr[end] = x;
        } else if(currSize < size) {
            end = (end + 1) % size;
            arr[end] = x;
            currSize++;
        }
    }
void pop() {
    if (start == -1 && end == -1) {
        cout << "Queue is empty\n";
        return;
    } 
    else if (start == end) {
        start = -1;
        end = -1;
    } 
    else {
        start = (start + 1) % size;
    }
    currSize--;
}
    int top() {
        if(start == -1 && end == -1) {
            cout << "Queue is empty";
            return -1;
        } else {
            return arr[start];
        }
    }
    int Size() {
        return currSize;
    }
};
int main() {
    Queue q;
    q.push(6);
    q.push(3);
    q.push(7);
    cout << "Top of stack before deleting any element is : " << q.top() << endl;
    cout << "size of stack before deleting any element is : " << q.Size() << endl;
    q.pop();
    cout << "The element at top is: " << q.top() << endl;
    cout << "Size of stack after deleting element : " << q.Size() << endl;
    cout << "Top of the stack after deleting an element : " << q.top() << endl;
}