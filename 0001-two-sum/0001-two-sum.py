class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        res = []
        for i in range(len(nums)):
            if target - nums[i] in nums[i+1:]:
                res.append(nums.index(nums[i]))
                res.append(i +1+ nums[i+1:].index(target - nums[i]))
        return res