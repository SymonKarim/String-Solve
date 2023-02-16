/*

Given a string, find all possible distinct palindromic substrings in it.

Input : "google"
Output: {"e", "l", "g", "o", "oo", "goog"}

*/

class Solution
{
public:
   
    void solve(int low, int high, auto&st , int sz,string s){
    	while(low>=0 and high<sz and s[low] == s[high]){
    		st.insert(s.substr(low, high-low+1));
    		low--; high++;
    	}
    }
	unordered_set<string> findPalindromicSubstrings(string s)
	{
		// Write your code here...
		unordered_set<string> st;
		for(int i=0;i<s.size();i++){
			solve(i,i,st,s.size(), s);
	        solve(i,i+1,st,s.size(),s);
		}
		return st;
	}
};
