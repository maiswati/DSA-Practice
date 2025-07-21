#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* convertArrayToLL(vector<int>arr) {
    int n = arr.size();
    if(n==0) return nullptr;
    Node* head = new Node(arr[0]);
    Node* current = head;
    for(int i=1; i<n; i++) {
        Node* temp = new Node(arr[i]);
        current->next = temp;
        temp = temp->next;
    }
    return head;
}

Node* getStartingNode(Node* head) {
    if(head==nullptr) return nullptr;
    map<Node*, int>mpp;
    Node* temp = head;
    while(temp!=nullptr) {
        if(mpp.find(temp) != mpp.end()) {
            return temp;
        }
        mpp[temp] = 1;
        temp=temp->next;
    }
    return nullptr;
}

int main() {
    vector<int>arr = {8,8,58,45,21,58,75,95};
    Node* head = convertArrayToLL(arr);
    Node* startingNode = getStartingNode(head);
}