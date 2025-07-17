//3. Search for an element in the linked list
//Check if a given key is present in any node of the linked list by comparing each node's value.

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
Node* convertArrToLL(vector<int>arr) {
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

int search(Node* head, int val) {
    Node* temp = head;
    while(temp) {
        if(temp->data == val) {
            return 1;
        } 
        temp = temp->next;
    }
    return 0;
}

int main() {
    vector<int>arr = {5, 8, 23, 4, 1, 8};
    int val = 6;
    Node* head = convertArrToLL(arr);
    int result = search(head, val);
    if(result == 1) {
        cout << "Number: " << val << " is present in the linked list.";
    } else {
        cout << "Number: " << val << " is not present in the linked list.";
    }
}