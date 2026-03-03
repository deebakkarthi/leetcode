#include <string>
#include <iostream>
#include <unordered_map>

using namespace std;
class Solution {
    public:
	bool isAnagram(string s, string t)
	{
		unordered_map<char, int> map;
		for (auto i : s) {
			if (map.count(i)) {
				map[i]++;
			} else {
				map[i] = 1;
			}
		}
		for (auto i : t) {
			if (map.count(i)) {
				map[i]--;
			} else {
				return false;
			}
		}

		for (auto &iter : map) {
			if (map[iter.first] != 0)
				return false;
		}

		return true;
	}
};

int main()
{
	Solution sol = Solution();
	cout << sol.isAnagram("anagram", "anagram") << endl;
	return 0;
}
