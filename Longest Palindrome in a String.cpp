//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    string longestPalin (string S) {
      int n = S.size();
      int mxLen = -1,start = -1;
      for(int i=0;i<n;i++){
          int j=i, k = i;
          while(j>=0 and k<n and S[j] == S[k]){
           if((k-j+1)>mxLen) {
              mxLen = k-j+1;
              start = j;
           }
              j--,k++;
          }
          j=i, k = i+1;
          while(j>=0 and k<n and S[j] == S[k]){
            if((k-j+1)>mxLen) {
              mxLen = k-j+1;
              start = j;
          }
              j--,k++;
          }
         
      }
      return S.substr(start,mxLen);
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
