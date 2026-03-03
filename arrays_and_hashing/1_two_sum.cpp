#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
    public:
	vector<int> twoSum(vector<int> &nums, int target)
	{
		vector<int> ret(2);
		unordered_map<int, vector<int> > map;
		for (int i = 0; i < nums.size(); i++) {
			map[nums[i]].push_back(i);
		}
		for (int i = 0; i < nums.size(); i++) {
			if (map.count(target - nums[i])) {
				for (auto it : map[target - nums[i]]) {
					if (it != i) {
						ret[0] = i;
						ret[1] = it;
						break;
					}
				}
			}
		}
		return ret;
	}
};

int main()
{
	vector<int> nums = { 2, 7, 11, 15 };
	int target = 9;
	Solution sol;
	auto ret = sol.twoSum(nums, target);
	cout << ret[0] << "," << ret[1] << endl;
	return 0;
}
