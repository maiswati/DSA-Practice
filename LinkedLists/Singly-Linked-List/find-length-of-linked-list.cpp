//2. Find the length of a linked list
//Count how many nodes are present in the linked list by traversing it from head to end.

#include<bits/stdc++.h>
using namespace std;
struct Node {
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

Node* getHead(vector<int>arr) {
    int n = arr.size();
    if(n==0) return 0;
    Node* head = new Node(arr[0]);
    Node* current = head;
    for(int i=1; i<n; i++)
    {
        Node* temp = new Node(arr[i]);
        current->next = temp;
        current = temp;
    }
    return head; 
}

int getLength(Node* head) {
    int count = 0;
    Node* temp = head;
    while(temp) {
        temp = temp->next;
        count++;
    }
    return count;
}

int main() {
    vector<int>arr = {7, 6, 23, 38, 72, 11, 5};

    Node* head = getHead(arr);

    cout << "The length of the linked list is: " << getLength(head);
}