// Insert the given node before the original head and return new head


#include<bits/stdc++.h>
using namespace std;

struct Node {
    public:
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

Node* convertArrayToLL(vector<int>arr)  {
    int n = arr.size();
    if(n==0) return 0;
    Node* head = new Node(arr[0]);
    Node* current = head;
    for(int i=1; i<n; i++) {
        Node* temp = new Node(arr[i]);
        temp->prev = current;
        current->next = temp;
        current = temp;
    }
    return head;
}

Node* insertNode(Node* head, int ele) {
    Node* temp = new Node(ele);
    head->prev = temp;
    temp->next = head;
    head = temp;
    return head;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int ele = 3;
    Node* head = convertArrayToLL(arr);
    head = insertNode(head, ele);
    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}