#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>arr = {3, 1, 2, 4};
    int n = arr.size();
    long long sum = 0;
    const int mod = 1e9 + 7;
    for(int i=0; i<n; i++) {
        int minEle = INT_MAX;
        for(int j=i; j<n; j++) {
            minEle = min(minEle, arr[j]);
            sum = sum + minEle;
        }
    }
    sum = sum % mod;
    cout << sum << endl;
}

//Time Complexity : O(n^2);
//Space Complexity : O(1);