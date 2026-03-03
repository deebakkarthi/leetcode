#include <string>
#include <iostream>
#include <vector>

using namespace std;
class Solution {
    public:
	bool isAnagram(string s, string t)
	{
		vector<int> count(26, 0);
		for (auto c : s) {
			++count[c - 'a'];
		}
		for (auto c : t) {
			--count[c - 'a'];
		}
		for (auto it : count) {
			if (it != 0)
				return false;
		}
		return true;
	}
};

int main()
{
	Solution sol = Solution();
	cout << sol.isAnagram("anagram", "nagaram") << endl;
	return 0;
}
