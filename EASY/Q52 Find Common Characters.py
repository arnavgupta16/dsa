# https://leetcode.com/problems/find-common-characters/description/?envType=daily-question&envId=2024-06-05

class Solution:
    def commonChars(self, words) :
        min_freq = [float('inf')] * 26
        
        for word in words:
            char_count = [0] * 26
            for char in word:
                char_count[ord(char) - ord('a')] += 1
            for i in range(26):
                min_freq[i] = min(min_freq[i], char_count[i])
        
        result = []
        for i in range(26):
            result.extend([chr(i + ord('a'))] * min_freq[i])
        
        return result
