class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        for i in range(len(nums)-1)[::-1]:
            if nums[i] < nums[i+1]:
                j = nums.index(min(filter(lambda x: x > nums[i], [n for n in nums[i+1:]])),i)
                nums[i], nums[j] = nums[j], nums[i]
                nums[i+1:]=sorted(nums[i+1:])
                return
        nums.sort()
        