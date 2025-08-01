#include<bits/stdc++.h>
using namespace std;

string findSmall(string num, int n, int k) {
    stack<char>st;
    for(int i=0; i<n; i++) {
        while(!st.empty() && k>0 && (st.top()-'0') > (num[i]-'0')) {
            st.pop();
            k--;
        }
        st.push(num[i]);
    }
    while(k>0) {
        st.pop();
        k--;
    }
    if(st.empty()) {
        return "0";
    }
    string res = "";
    while(!st.empty()) {
        res += st.top();
        st.pop();
    }
    while(res.size() != 0 && res.back() == '0') {
        res.pop_back();
    }
    reverse(res.begin(), res.end());
    if(res.size() == 0) {
        return "0";
    } else {
        return res;
    }
}

int main() {
    string num = "1432219";
    int n = num.size();
    int k = 3;
    string small = findSmall(num, n, k);
    cout << small << endl;
}