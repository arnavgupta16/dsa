#https://leetcode.com/problems/minimum-string-length-after-removing-substrings/?envType=daily-question&envId=2024-10-13

class Solution:
    def minLength(self, s: str) -> int:
        temp = []
        for ch in s:
            if temp and temp[-1] == 'A' and ch == 'B':
                temp.pop()
            elif temp and temp[-1] == 'C' and ch == 'D':
                temp.pop()
            else:
                temp += ch
        return len(temp)
