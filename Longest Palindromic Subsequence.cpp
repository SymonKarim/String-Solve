//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int solveTabular(string s, string t, int n, int m){
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        int count = 0 , mx = 0;
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                 if(s[i]==t[j]){
                     dp[i][j] = 1 + dp[i+1][j+1];
                 }else{
                     dp[i][j] = max(dp[i+1][j],dp[i][j+1]);
                 }
            }
        }
        return dp[0][0];
    }
    int longestPalinSubseq(string A) {
        //code here
        string B = A;
        reverse(B.begin(), B.end());
        return solveTabular(A,B,A.size(), B.size());
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
