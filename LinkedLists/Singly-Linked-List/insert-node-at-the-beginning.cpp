//4. Insert a node at the beginning
//Create a new node and point its next to the current head. Update the head to the new node.

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

Node* insertNodeAtBeginning(Node* head, int element) {
    Node* newNode = new Node(element);
    newNode->next = head;
    head = newNode;
    return head;
}

void print(Node* head) {
    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    vector<int>arr = {1, 8, 18, 2, 30, 25, 50};
    int element;
    cin >> element;
    Node* head = convertArrToLL(arr);
    head = insertNodeAtBeginning(head, element);
    print(head);
}