//Converting array or vector to doubly linked list where the node has the access to both the address of the next node 
// as well as address of the previous node

#include<bits/stdc++.h>
using namespace std;

struct Node {
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArrayToDLL(vector<int>arr) {
    int n = arr.size();
    if(n==0) return 0;
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1; i<n; i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}


int main() {
    vector<int>arr = {52, 5, 8, 7, 9, 12, 23};
    Node* head = convertArrayToDLL(arr);
    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}