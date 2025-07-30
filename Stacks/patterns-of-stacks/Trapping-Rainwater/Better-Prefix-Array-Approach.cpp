#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>height = {4,2,0,3,2,5};
    int n = height.size();
    vector<int>leftMaxes(n,0);
    vector<int>rightMaxes(n,0);
    int total = 0;
    leftMaxes[0] = height[0];
    rightMaxes[n-1] = height[n-1];
    for(int i=1; i<n; i++) {
        leftMaxes[i] = max(leftMaxes[i-1], height[i]);
    }
    for(int j=n-2; j>=0; j--) {
        rightMaxes[j] = max(rightMaxes[j+1], height[j]);
    }
    for(int i=0; i<n; i++) {
        int trapped = min(leftMaxes[i] , rightMaxes[i]) - height[i];
        if(trapped > 0) total += trapped;
    }
    cout << total << endl;
}