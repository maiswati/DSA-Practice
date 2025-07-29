#include <bits/stdc++.h>
using namespace std;

int priority(char ch) {
    if(ch == '^') return 3;
    if(ch == '*' || ch == '/') return 2;
    if(ch == '+' || ch == '-') return 1;
    return -1;
}

string convertInfixToPostfix(string s, int n) {
    string ans = "";
    stack<char> st;

    for(int i = 0; i < n; i++) {
        char ch = s[i];

        if(isalnum(ch)) {
            ans += ch;
        } 
        else if(ch == '(') {
            st.push(ch);
        } 
        else if(ch == ')') {
            while(!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            if(!st.empty()) st.pop(); // remove '('
        } 
        else { // operator
            while(!st.empty() && st.top() != '(' && 
                  (priority(ch) < priority(st.top()) || 
                   (priority(ch) == priority(st.top()) && ch != '^'))) {
                ans += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }

    return ans;
}

int main() {
    string s;
    cin >> s;
    int n = s.size();
    string ans = convertInfixToPostfix(s, n);
    cout << ans << endl;
    return 0;
}
