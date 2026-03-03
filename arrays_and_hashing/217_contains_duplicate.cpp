#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
    public:
	bool containsDuplicate(vector<int> &nums)
	{
		unordered_set<int> set;
		for (auto i : nums) {
			set.insert(i);
		}
		return (set.size() != nums.size());
	}
};

int main()
{
	Solution sol = Solution();
	vector<int> nums = { 1, 2, 3, 1 };
	cout << sol.containsDuplicate(nums) << endl;
	return 0;
}
