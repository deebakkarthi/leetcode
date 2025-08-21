#!/usr/bin/env python3


def solution(nums):
    dict_ = {}
    for i in nums:
        if i not in dict_:
            dict_[i] = 1
        else:
            return True
    return False


if __name__ == "__main__":
    nums = [1,2,3,1]
    print(solution(nums))
    nums = [1,2,3,4]
    print(solution(nums))
    nums = [1,1,1,3,3,4,3,2,4,2]
    print(solution(nums))
