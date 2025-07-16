// LeetCode 1: Set Matrix Zero
// Link: https://leetcode.com/problems/longest-consecutive-sequence/
// Category: Arrays
// Approach: Brute


#include<bits/stdc++.h>
using namespace std;
void reformedMatrix(int arr[][100], int r, int c)
{
    vector<int>row(r, 0);
    vector<int>col(c, 0);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(arr[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(row[i] == 1 || col[j] == 1)
            {
                arr[i][j] = 0;
            }
        }
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int r, c;
    cin >> r >> c;
    int arr[100][100];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin >> arr[i][j];
        }
    }
    reformedMatrix(arr, r, c);
}