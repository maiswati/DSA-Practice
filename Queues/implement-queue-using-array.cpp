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
            size = 10;
            currSize = 0;
            arr = new int[size];
            start = -1;
            end = -1;
        } 
    void push(int x) {
        if(currSize == size) {
            cout << "Cannot push";
        } else if(currSize == 0) {
            start = 0;
            end = 0;
        } else {
            end = (end+1) % size;
        }
        arr[end] = x;
        currSize++;
    }
    int pop() {
        if(currSize == 0) {
            cout << "Cannot pop";
            return;
        }
        int ele = arr[start];
        if(currSize == 1) {
            start = -1;
            end = -1;
        } else  {
            start = (start+1) % size;
        }
        currSize--;
        return ele;
    }
    int top() {
        if(currSize == 0) {
            cout << "Queue is empty";
            return;
        }
        return arr[start];
    }
    int Size() {
        return currSize;
    }
};
int main() {
    Queue q;
    q.push(5);
    q.push(10);
    q.push(23);
    q.push(18);
    cout << "The size of queue before deleting is : " << q.Size() << endl;
    cout << "The element popped is: " << q.pop();
    cout << "The element at top is: " << q.top();
    cout << "The size of the queue is : " << q.Size();
}