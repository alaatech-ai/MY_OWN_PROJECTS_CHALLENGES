class Solution:
    def singleNumber(self, nums: list[int]) -> int:
        res = 0
        for num in nums:
            res ^= num
        return res
test = input('enter ur integer nbrs:\n')
t = test.split()
nums = []
for x in t:
    nums.append(int(x))
sol = Solution()
rslt = sol.singleNumber(nums)
print('the single nbr is:\n', rslt)
