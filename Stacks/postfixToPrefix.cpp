#include<bits/stdc++.h>
using namespace std;

void convertPostfixToPrefix(string s) {
    int n = s.size();
    stack<string>st;
    for(int i=0; i<n; i++) {
        if(s[i] >= 'a' && s[i] <= 'z' || 
           s[i] >= 'A' && s[i] <= 'Z' || 
           s[i] >= '0' && s[i] <= '9') {
                st.push(string(1, s[i]));
        } else {
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            string newString = "";
            newString = newString + s[i] + t2 + t1;
            st.push(newString);
        }
    }
    cout << st.top() << endl;
}

int main() {
    string s;
    cin >> s;
    convertPostfixToPrefix(s);
}