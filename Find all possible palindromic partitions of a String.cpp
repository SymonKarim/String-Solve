class Solution {
  public:
    bool palindrome(string s){
        int start = 0 , end = s.size()-1;
        while(start<end){
            if(s[start++] != s[end--]) return false;
        }return true;
    }
    void solve(int index,int &size, vector<vector<string>> &ans,vector<string> &temp,string &s){
        if(index >= size){
            ans.push_back(temp);
            return;
        }
        string tmp = "";
        for(int i=index;i<size;i++){
            tmp+=s[i];
            if(palindrome(tmp)){
                temp.push_back(tmp);
                solve(i+1, size, ans, temp, s);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> allPalindromicPerms(string S) {
        vector<vector<string>> ans;
        vector<string>temp;
        int size= S.size();
        solve(0, size, ans, temp, S);
        return ans;
    }
};
