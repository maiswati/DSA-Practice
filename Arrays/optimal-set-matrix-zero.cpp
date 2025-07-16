// LeetCode 1: Set Matrix Zero
// Link: https://leetcode.com/problems/longest-consecutive-sequence/
// Category: Arrays
// Approach: Optimal


#include<bits/stdc++.h>
using namespace std;
void reformMatrix(int arr[][100], int r, int c)
{
    //int row[r] = {0} -> matrix[..][0]
    //int col[c] = {0} -> matrix[0][..]
    int col0 = 1;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(arr[i][j] == 0)
            {
                arr[i][0] = 0;
                if(j!=0)
                {
                    arr[0][j] = 0;
                } else {
                    col0 = 0;
                }
            }
        }
    }
    for(int i=r-1; i>=1; i--)
    {
        for(int j=c-1; j>=1; j--)
        {
            if(arr[i][j] != 0)
            {
                if(arr[i][0] == 0 || arr[0][j] == 0){
                    arr[i][j] = 0;
                }
            }
        }
    }
    if(arr[0][0] == 0)
    {
        for(int j=0; j<c; j++)
        {
            arr[0][j] = 0;
        }
    }
    if(col0 == 0)
    {
        for(int i=0; i<r; i++)
        {
            arr[i][0] = 0;
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
    int r,c;
    cin >> r >> c;
    int arr[100][100];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin >> arr[i][j];
        }
    }
    reformMatrix(arr, r, c);
}
