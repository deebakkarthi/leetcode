#!/usr/bin/env python3


def solve(nums):
    answer = [1 for _ in nums]
    tmp = 1
    for idx, _ in enumerate(nums):
        answer[idx] = tmp
        tmp *= nums[idx]
    i = 0
    tmp = 1
    for num in nums[::-1]:
        answer[(len(nums) - 1) - i] *= tmp
        tmp *= num
        i += 1
    return answer


if __name__ == "__main__":
    nums = [1, 2, 3, 4]
    print(nums)
    print(solve(nums))
