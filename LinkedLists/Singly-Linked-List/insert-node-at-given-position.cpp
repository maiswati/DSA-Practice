/*
6. Insert a node at a specific index
Traverse the list to the given position, update pointers to insert the new node in between.
*/

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

Node* convertArrayToLL(vector<int>arr) {
    int n = arr.size();
    if(n==0) return 0;
    Node* head = new Node(arr[0]);
    Node* current = head;
    for(int i=1; i<n; i++) {
        Node* temp = new Node(arr[i]);
        current->next = temp;
        current = temp;
    }
    return head;
}

Node* addNodeAtIndex(Node* head, int index, int ele) {
    if(index == 0) {
        Node* newNode = new Node(ele, head);
        return newNode;
    }
    Node* temp = head;
    int count = 1;
    Node* preNode;
    while(temp) {
        if(count == index) {
            Node* newNode = new Node(ele, temp);
            preNode->next = newNode;
            return head;
        }
        preNode = temp;
        temp = temp->next;
        count++;
    }
}

void print(Node* head) {
    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    vector<int>arr = {20, 5, 85, 96, 47, 32, 23};
    int index = 4;
    int element = 10;
    Node* head = convertArrayToLL(arr);
    head = addNodeAtIndex(head, index, element);
    print(head);
}