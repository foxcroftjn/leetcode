class Solution(object):
    def twoSum(self, nums, target):
        found = {}
        for i, n in enumerate(nums):
            if target - n in found:
                return [i, found[target - n]]
            found[n] = i