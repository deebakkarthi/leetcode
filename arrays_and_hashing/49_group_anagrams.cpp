#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
class Solution {
    public:
	vector<vector<string> > groupAnagrams(vector<string> &strs)
	{
		vector<string> tmp(strs.size());
		vector<vector<string> > ret;
		unordered_map<string, vector<string> > dict;

		for (int i = 0; i < tmp.size(); i++) {
			tmp[i] = strs[i];
			sort(tmp[i].begin(), tmp[i].end());
			dict[tmp[i]].push_back(strs[i]);
		}

		for (auto &it : dict) {
			ret.push_back(dict[it.first]);
		}
		return ret;
	}
};

int main()
{
	Solution sol;
	vector<string> strs = { "eat", "tea", "tan", "ate", "nat", "bat" };
	sol.groupAnagrams(strs);
	return 0;
}
