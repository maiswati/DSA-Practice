#include<bits/stdc++.h>
using namespace std;
class MinStack {
    stack<int>s;
    int minVal;
    public: 
    MinStack() {

    }
    void push(int val) {
        if(s.empty()) {
            s.push(val);
            minVal = val;
        } else {
            if(val < minVal) {
                s.push(2*val - minVal);
                minVal = val;
            } else {
                s.push(val);
            }
        }
    }
    void pop() {
        if(s.top() < minVal) {
            minVal = 2*minVal - s.top();
        }
        s.pop();
    }
    int top() {
        if(s.top() < minVal) {
            return minVal;
        }
        return s.top();
    }
    int getMin() {
        return minVal;
    }
};
int main() {
    MinStack ms;
    ms.push(23);
    ms.push(38);
    ms.push(19);
    ms.push(24);
    ms.push(1);
    cout << "min element in minstack" << ms.getMin() << endl;
    cout << "top element is: " << ms.top() << endl;
    ms.pop();
    cout << "min element :  " << ms.getMin() << endl;
}