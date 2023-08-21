//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int LCSof3 (string A, string B, string C, int n1, int n2, int n3);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        cout << LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends

int solve(vector<vector<vector<int>>>&dp,string A,string B,string C, int n1,
int n2, int n3, int i1,int i2,int i3){
 if(i1==n1 or i2==n2 or i3==n3)return 0;
 int &ret = dp[i1][i2][i3];
 if(ret!=-1) return ret;
 int x = 0,y = 0;
 if(A[i1] == B[i2] and B[i2] == C[i3]){
     x = 1+solve(dp,A,B,C, n1,n2,n3, i1+1,i2+1,i3+1);
 }else{
     y = max(solve(dp,A,B,C, n1,n2,n3, i1+1,i2,i3),
     max(solve(dp,A,B,C, n1,n2,n3, i1,i2+1,i3), 
     solve(dp,A,B,C, n1,n2,n3, i1,i2,i3+1)));
 }
 return ret = max(x,y);
}
int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
{
    // your code here
    vector<vector<vector<int>>>dp(n1+1, vector<vector<int>>(n2+1, vector<int>(n3+1,-1)));
    return solve(dp,A,B,C,n1,n2,n3, 0,0,0);
}
