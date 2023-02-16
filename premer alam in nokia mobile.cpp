/*

Given a sequence of numbers between 2 and 9, print all possible combinations of words formed from the mobile keypad which has english alphabets associated with each key.

keypad = {
	2: ['A', 'B', 'C'],
	3: ['D', 'E', 'F'],
	4: ['G', 'H', 'I'],
	5: ['J', 'K', 'L'],
	6: ['M', 'N', 'O'],
	7: ['P', 'Q', 'R', 'S'],
	8: ['T', 'U', 'V'],
	9: ['W', 'X', 'Y', 'Z']
}

Input : [2, 3, 4]

Output: {"CEG", "AEH", "CDH", "CFI", "CEH", "BEI", "AFH", "BFG", "BDI", "ADH", "AEG", "AEI", "BEH", "BFH", "BDH", "CEI", "AFG", "BFI", "ADG", "CDG", "BDG", "CDI", "BEG", "AFI", "CFG", "CFH", "ADI"}

*/

class Solution
{
public:
    void solve( auto &keypad, auto const &nums , auto &set,string temp, int index){
    	if(index==-1){
    		set.insert(temp);
    		return;
    	}
    	int dig = nums[index];
    	
    	for(auto i:keypad[dig]){
    		solve(keypad, nums, set, i+temp, index-1);
    	}
    	
    }
	unordered_set<string> findCombinations(unordered_map<int,vector<char>> &keypad,
					vector<int> &nums)
	{
		
		unordered_set<string>set;
		if(!keypad.size() or !nums.size()) return set;
		solve(keypad, nums, set,"", nums.size()-1);
		return set;
	}
};
