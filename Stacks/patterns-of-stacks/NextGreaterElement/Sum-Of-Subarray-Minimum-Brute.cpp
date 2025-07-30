#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>arr = {1, 3, 2, 4};
    int n = arr.size();
    vector<int>minimums;
    const int mod = 1e9 + 7;
    long long sum = 0;
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            int minEle = INT_MAX;
            for(int k=i; k<=j; k++) {
                minEle = min(minEle, arr[k]);
            }
            minimums.push_back(minEle);
        }
    }
    for(int i=0; i<minimums.size(); i++) {
       sum = ( sum + minimums[i] ) % mod; 
    }
    cout << sum << endl;
}

// Time Complexity : O(n^3);
//Space Complexity : O(n^2);