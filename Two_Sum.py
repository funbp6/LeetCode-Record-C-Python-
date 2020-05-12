class Solution:
    def twoSum(self, nums , target):
        dnums = {}
        for index,i in enumerate(nums):
            tmp = target - i
            if tmp not in dnums:
                dnums[i] = index
            else:
                return [dnums[tmp], index]