#!/usr/bin/env python3


def solve(nums, target):
    dict_ = {}
    for n, elem in enumerate(nums):
        dict_.setdefault(elem, []).append(n)
        if (target - elem) in dict_:
            for other_elem_ind in dict_[target - elem]:
                if other_elem_ind != n:
                    return (
                        (n, other_elem_ind)
                        if (n < other_elem_ind)
                        else (other_elem_ind, n)
                    )
                else:
                    pass

if __name__ == "__main__":
    nums = [2, 7, 11, 15]
    target = 9
    print(solve(nums, target))
    nums = [3, 2, 4]
    target = 6
    print(solve(nums, target))
    nums = [3, 3]
    target = 6
    print(solve(nums, target))
