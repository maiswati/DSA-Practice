#include<bits/stdc++.h>
using namespace std;
class Stack {
    vector<int>v;
    
    public:
        void push(int x) {
            v.push_back(x);
        }
        int pop() {
            int ele = v[v.size() - 1];
            v.pop_back();
            return ele;
        }
        int top() {
            return v[v.size()-1];
        }
        bool empty() {
            return v.size() == 0;
        }
        int Size() {
            return v.size();
        }
};
int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(23);
    cout << "The size: " << s.Size() << endl;
    cout << "The popped element is: " << s.pop() << endl;
    cout << "The top element is: " << s.top() << endl;
    s.push(40);
    cout << "The top ele is: " << s.top() << endl;
}