#!/usr/bin/python3


def solve(nums, k):
    dict_ = {}
    # +1 because for [1,1,1] the freq is 3 but creating a list of len()
    # will only allow for index 2
    freq = [[] for _ in range(len(nums) + 1)]
    for num in nums:
        dict_[num] = 1 + dict_.get(num, 0)
    for key, v in dict_.items():
        freq[v].append(key)

    res = []
    for i in range(len(freq) - 1, 0, -1):
        for n in freq[i]:
            res.append(n)
            if len(res) == k:
                return res


if __name__ == "__main__":
    nums = [1,1,1,2,2,3]
    k = 2
    print(solve(nums, k))
