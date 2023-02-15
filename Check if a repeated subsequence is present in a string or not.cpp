class Solution
{
public:
bool isPalindrome(string str, int low, int high)
{
    // base case
  
 
    return (low>=high) || (str[low] == str[high]) &&
        isPalindrome(str, low + 1, high - 1);
}
	bool hasRepeatedSubsequence(string s)
	{
	   unordered_map<char,int>freq;
	   for(auto i:s){ freq[i]++;
	   	if(freq[i]>=3) return true;
 	   }
	   string temp;
	   for(auto i:s){
	   	if(freq[i]>=2){
	   		temp+=i;
	   	}
	   }
	   return !isPalindrome(temp, 0,temp.size()-1);
	}
};
