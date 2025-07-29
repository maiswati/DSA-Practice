#include<bits/stdc++.h>
using namespace std;

void convertPrefixToInfix(string s) {
    int n = s.size();
    stack<string>st;
    for(int i=n-1; i>=0; i--) {
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
            newString = newString + '(' + t1 + s[i] + t2 + ')';
            st.push(newString);
        }
    }
    cout << st.top() << endl;
}

int main() {
    string s;
    cin >> s;
    convertPrefixToInfix(s);
}