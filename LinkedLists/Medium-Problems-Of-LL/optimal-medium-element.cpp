//optimal approach (tortoise & hare) approach slow fast pointers

#include<bits/stdc++.h>
using namespace std;

struct Node {
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

Node* convertArrayToLL(vector<int>arr) {
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

Node* getMidElement(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while(fast!=nullptr && fast->next!=nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main() {
    vector<int>arr = {5, 8, 7, 9, 12, 45, 6};
    Node* head = convertArrayToLL(arr);
    Node* midEle = getMidElement(head);
}