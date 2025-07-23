///Add two linked list where the number are reversed.


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

Node* convertArray1ToLL(vector<int>a) {
    int n = a.size();
    if(n==0) return nullptr;
    Node* head = new Node(a[0]);
    Node* current = head;
    for(int i=1; i<n; i++) {
        Node* temp = new Node(a[i]);
        current->next = temp;
        current = temp;
    }
    return head;
}

Node* convertArray2ToLL(vector<int>b) {
    int n = b.size();
    if(n==0) return nullptr;
    Node* head = new Node(b[0]);
    Node* current = head;
    for(int i=1; i<n; i++) {
        Node* temp = new Node(b[i]);
        current->next = temp;
        current = temp;
    }
    return head;
}

Node* getSum(Node* h1, Node* h2) {
    if(h1==nullptr || h2==nullptr) return nullptr;
    Node* t1 = h1;
    Node* t2 = h2;
    Node* dummyNode = new Node(-1);
    Node* current = dummyNode;
    int carry = 0, sum = 0;
    while(t1!=nullptr || t2!=nullptr) {
        sum = carry;
        if(t1) sum += t1->data;
        if(t2) sum += t2->data;
        Node* newNode = new Node(sum%10);
        carry = sum/10;
        current->next = newNode;
        current = newNode;
        if(t1) t1=t1->next;
        if(t2) t2=t2->next;
    }
    if(carry) {
        Node* newNode = new Node(carry);
        current->next = newNode;
        current = newNode;
    }
    return dummyNode->next;
}

int main() {
    vector<int>arr1 = {6, 5, 4, 2};
    vector<int>arr2 = {4, 23};
    Node* head1 = convertArray1ToLL(arr1);
    Node* head2 = convertArray2ToLL(arr2);
    Node* result = getSum(head1, head2);
    Node* temp = result;
    while(temp!=nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}