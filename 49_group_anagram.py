#!/usr/bin/env python3
from typing import List


class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dict_ = {}
        for idx, el in enumerate(strs):
            freq = [0 for _ in range(26)]
            for char in el:
                freq[ord(char) - 97] += 1
            dict_.setdefault(tuple(freq), []).append(el)
        return [val for val in dict_.values()]


if __name__ == "__main__":
    solution = Solution()
    strs = ["eat", "tea", "tan", "ate", "nat", "bat"]
    print(solution.groupAnagrams(strs))
    strs = [""]
    print(solution.groupAnagrams(strs))
    strs = ["a"]
    print(solution.groupAnagrams(strs))
