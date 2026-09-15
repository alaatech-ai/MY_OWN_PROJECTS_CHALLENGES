text = input('enter any sentence:\n')
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        words = s.split()
        lastword = words[-1]
        return len(lastword)

sol = Solution()
result = sol.lengthOfLastWord(text)
print("Length:", result)
