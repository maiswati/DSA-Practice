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

Node* convertArrayToDLL(vector<int> arr) {
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

vector<vector<int>> getPairs(Node* head, int t) {
    if(head==nullptr) return {{},{}};
    vector<vector<int>>pairArray;
    Node* temp = head;
    set<int>st;
    while(temp!=nullptr) {
        st.insert(temp->data);
        int remaining = t - temp->data;
        if(st.find(remaining) != st.end()) {
            if(remaining < temp->data) {
                pairArray.push_back({remaining, temp->data});
            } else {
                pairArray.push_back({temp->data, remaining});
            }
        }
        temp = temp->next;
    }
    return pairArray;
}

int main() {
    vector<int>arr = {1, 2, 4, 5, 6, 8, 9};
    Node* head = convertArrayToDLL(arr);
    int target = 7;
    vector<vector<int>>pairs = getPairs(head, target);
     for (const auto p : pairs) {
        if (p.size() == 2) {
            cout << "(" << p[0] << ", " << p[1] << ")";
        } else {
            cout << "(Invalid pair)";
        }
        cout << " ";
    }
}