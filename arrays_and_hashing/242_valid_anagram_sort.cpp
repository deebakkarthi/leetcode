#include <string>
#include <iostream>

using namespace std;
class Solution {
    public:
	bool isAnagram(string s, string t)
	{
		string s1, t1;
		s1 = s;
		t1 = t;
		sort(s1.begin(), s1.end());
		sort(t1.begin(), t1.end());
		return s1==t1;
	}
};

int main()
{
	Solution sol = Solution();
	cout << sol.isAnagram("anagram", "anagram") << endl;
	return 0;
}
