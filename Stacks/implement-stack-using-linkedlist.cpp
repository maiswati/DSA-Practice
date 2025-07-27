#include<bits/stdc++.h>
using namespace std;
struct stackNode {
    int data;
    stackNode * next;
    int size;
    stackNode(int data1) {
        data = data1;
        next = nullptr;
    }
};
struct MyStack {
    stackNode* top;
    int size;
    MyStack() {
        top = nullptr;
        size = 0;
    }
    void stackPush(int x) {
        stackNode * element = new stackNode(x);
        element -> next = top;
        top = element;
        cout << "element pushed" << endl;
        size++;
    }
    int stackPop() {
        if(top==nullptr) {
            return -1;
        }
        int topData = top->data;
        stackNode* temp = top;
        top = top->next;
        delete temp;
        size--;
        return topData;
    }
    int stackSize() {
        return size;
    }
};
int main() {
    MyStack s;
    s.stackPush(10);
    s.stackPush(20);
    s.stackPush(30);
    cout << "Size: " << s.stackSize() << endl;
    cout << "Popped: " << s.stackPop() << endl;
    cout << "Current size: " << s.stackSize() << endl;
    return 0;


}