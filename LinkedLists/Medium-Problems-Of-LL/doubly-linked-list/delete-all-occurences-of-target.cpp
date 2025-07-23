// Delete All Occurences of the Linked List:


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

Node* deleteAllOccurences(Node* head, int t) {
    if(head==nullptr) return nullptr;
    Node* temp = head;
    while(temp!=nullptr) {
        if(temp->data == t) {
            Node* nextNode = temp->next;
            Node* prevNode = temp->prev;
            Node* nodeToDelete = temp;
            if(prevNode) {
                prevNode->next = nextNode;
            } else {
                head = nextNode;
            }
            if(nextNode) {
                nextNode->prev = prevNode;
            }
            temp = nextNode;
            delete nodeToDelete;
        } else {
            temp = temp->next;
        }
    }
    return head;
}

int main() {
    vector<int>arr = {1, 2, 3, 1, 4};
    int target = 1;
    Node* head = convertArrayToDLL(arr);
    head = deleteAllOccurences(head, target);
    Node* temp = head;
    while(temp!=nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}