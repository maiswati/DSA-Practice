//Optimal approach for reversing a linked list

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1, Node* next1, Node* prev1) {
        data = data1;
        next = next1;
        prev = prev1;
    }

    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node* convertArrayToDLL(vector<int>arr) {
    int n = arr.size();
    if(n==0) return 0;
    Node* head = new Node(arr[0]);
    Node* current = head;
    for(int i=1; i<n; i++) {
        Node* temp = new Node(arr[i]);
        current->next = temp;
        temp->prev = current;
        current = temp;
    }
    return head;
}

Node* reverseDLL(Node* head) {
    if (!head) return nullptr;

    Node* left = head;
    Node* right = head;
    while (right->next != nullptr) {
        right = right->next;
    }
    while (left != right && left->prev != right) {
        swap(left->data, right->data);
        left = left->next;
        right = right->prev;
    }

    return head;
}

void print(Node* head) {
    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    vector<int>arr = {9, 8, 7, 5, 2, 1, 10, 56};
    Node* head = convertArrayToDLL(arr);
    head = reverseDLL(head);
    print(head);
}