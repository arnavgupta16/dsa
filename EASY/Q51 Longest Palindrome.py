#https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/description/

class Solution:
    def longestPalindrome(self, s):
        charFrequency = Counter(s)
        oddFrequencyCount = 0
        for frequency in charFrequency.values():
            if frequency % 2 == 1:
                oddFrequencyCount += 1
        if oddFrequencyCount > 1:
            return len(s) - oddFrequencyCount + 1
        return len(s)
