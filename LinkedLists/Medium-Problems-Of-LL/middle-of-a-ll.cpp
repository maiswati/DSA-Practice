// Return the middle of a Linked List


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

Node* getMidEle(Node* head) {
    if(head == nullptr) return nullptr;
    int length = 0;
    Node* temp = head;
    while(temp!=nullptr) {
        length++;
        temp = temp->next;
    }

    int mid = length / 2;
    temp = head;
    for(int i=0; i<mid; i++) {
        temp = temp->next;
    }
    return temp;
}

int main() {
    vector<int>arr = {5, 8, 91, 75, 8, 56, 10};
    Node* head = convertArrayToLL(arr);
    Node* midNode = getMidEle(head);
    cout << midNode->data << endl;
}

