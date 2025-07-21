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

Node* convertArrayToLL(vector<int>arr, int pos) {
    int n = arr.size();
    if(n==0) return nullptr;
    
    Node* head = new Node(arr[0]);
    Node* current = head;
    Node* loopNode = nullptr;

    if(pos == 0) loopNode = head;

    for(int i=1; i<n; i++) {
        Node* temp = new Node(arr[i]);
        current->next = temp;
        current = temp;

        if(i==pos) {
            loopNode = temp;
        }
    }
    if(pos>=0) {
        current->next = loopNode;
    }

    return head;
}

int getLengthOfLoop(Node* head) {
    map<Node*, int>mpp;
    Node* temp = head;
    int t = 1;
    while(temp!=nullptr) {
        if(mpp.find(temp) != mpp.end()) {
            return t-mpp[temp];
        }
        mpp[temp] = t;
        t++;
        temp = temp->next;
    }
    return -1;
}

int main() {
    vector<int>arr = {3, 2, 0, -4};
    int pos = 1;
    Node* head = convertArrayToLL(arr, pos);
    int length = getLengthOfLoop(head);
    if(length != -1) {
        cout << "The length of the loop is: " << length << endl;
    } else {
        cout << "Loop does not exist." << endl;
    }
}