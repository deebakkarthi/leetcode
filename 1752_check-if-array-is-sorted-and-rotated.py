class Solution:
    def find_origin(self, arr):
        for i, el in enumerate(arr):
            if i:
                if el < arr[i - 1]:
                    return i
        return 0

    def check(self, nums):
        origin = self.find_origin(nums)
        tmp = nums[origin:] + nums[:origin]
        return sorted(tmp) == tmp


if __name__ == "__main__":
    nums = [3, 4, 5, 1, 2]
    print(nums)
    solution = Solution()
    print(solution.check(nums))
