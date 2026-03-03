#include <utility>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
    private:
	static bool comp(pair<int, int> a, pair<int, int> b)
	{
		return a.second > b.second;
	}

    public:
	vector<int> topKFrequent(vector<int> &nums, int k)
	{
		vector<int> ret;
		unordered_map<int, int> dict;
		for (auto it : nums) {
			if (dict.find(it) != dict.end()) {
				dict[it]++;
			} else {
				dict[it] = 1;
			}
		}

		vector<pair<int, int> > elems(dict.begin(), dict.end());
		sort(elems.begin(), elems.end(), this->comp);
		for (int i = 0; i < k; i++) {
			ret.push_back(elems[i].first);
		}
		return ret;
	}
};

int main()
{
	std::vector<int> nums = { 1, 1, 1, 2, 2, 3 };
	int k = 2;
	Solution sol;
	for (auto it : sol.topKFrequent(nums, k)) {
		cout << it << endl;
	}
	return 0;
}
