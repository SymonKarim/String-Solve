class Solution{
    public:
 
    int solveTabular(string s, string t, int n, int m){
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        int count = 0 , mx = INT_MIN;
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                 if(s[i]==t[j]){
                     dp[i][j] = 1 + dp[i+1][j+1];
                     if(dp[i][j]>mx) mx = dp[i][j];
                 }
            }
        }
        return mx==INT_MIN? 0 :mx;
    }
    int longestCommonSubstr (string s, string t, int n, int m)
    { 
        return solveTabular(s,t,n,m);
    }
};
