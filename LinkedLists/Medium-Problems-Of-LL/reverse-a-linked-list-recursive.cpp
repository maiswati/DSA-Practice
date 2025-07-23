//Recursive Way to reverse a linked list

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

Node* convertArrayToLL(vector<int> arr) {
    int n = arr.size();
    if(n==0) return nullptr;
    Node* head = new Node(arr[0]);
    Node* current = head;
    for(int i=1; i<n; i++) {
        Node* temp = new Node(arr[i]);
        current->next = temp;
        current = temp;
    }
    return head;
}

Node* reverseALL(Node* head) {
    if(head==nullptr || head->next == nullptr) {
        return head;
    }
    Node* newHead = reverseALL(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = nullptr;
    return newHead;
}

int main() {
    vector<int>arr = {5,4,3,2,1};
    Node* head = convertArrayToLL(arr);
    head = reverseALL(head);
    Node* temp = head;
    while(temp!=nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}