// Reverse linked list

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

Node* convertArrayToDLL(vector<int>arr) {
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

Node* reverseADLL(Node* head) {
    stack<int>st;
    Node* temp = head;
    while(temp) {
        st.push(temp->data);
        temp = temp->next;
    }
    temp = head;
    while(temp) {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
    return head;
}

void print(Node* head) {
    Node* temp = head;
    while(temp) {
        cout << temp->data << " " ;
        temp = temp->next;
    }
}

int main() {
    vector<int>arr = {6,3,7,5,2,8,9};
    Node* head = convertArrayToDLL(arr);
    head = reverseADLL(head);
    print(head);
}