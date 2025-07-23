//Brute force approach using hashing


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

Node* convertArrayToLL(vector<int>arr) {
    int n = arr.size();
    if(n==0) return 0;
    Node* head = new Node(arr[0]);
    Node* current = head;
    for(int i=1; i<n; i++) {
        Node* temp = new Node(arr[i]);
        current->next = temp;
        temp = temp->next;
    }
    return head;
}

bool detectLoop(Node* head) {
    map<Node*, int>mpp;
    Node* temp = head;
    while(temp!=nullptr) {
        if(mpp.find(temp) != mpp.end()) {
            return true;
        }
        mpp[temp] = 1;
        temp = temp->next;
    }
    return false;
}

int main() {
    vector<int>arr = {5, 7, 9, 2, 5, 32, 45};
    Node* head = convertArrayToLL(arr);
    bool result = detectLoop(head);
}