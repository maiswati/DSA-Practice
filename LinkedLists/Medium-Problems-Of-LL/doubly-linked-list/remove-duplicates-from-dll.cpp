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
    if(n==0) return nullptr;
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

Node* removeDuplicates(Node* head) {
    if(head == nullptr) return nullptr;
    map<int, int>hashMap;
    Node* temp = head;
    while(temp!=nullptr) {
        hashMap[temp->data]++;
        if(hashMap[temp->data] >= 2) {
            Node* prevNode = temp->prev;
            Node* nextNode = temp->next;
            Node* nodeToDelete = temp;
            temp = nextNode;
            if(prevNode) prevNode->next = nextNode;
            if(nextNode) nextNode->prev = prevNode;
            delete(nodeToDelete);
        }else {
            temp = temp->next;
        }
    }
    return head;
}

int main() {
    vector<int>arr = {1, 1, 1, 1, 1, 2};
    Node* head = convertArrayToDLL(arr);
    head = removeDuplicates(head);
    Node* temp = head;
    while(temp!=nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}