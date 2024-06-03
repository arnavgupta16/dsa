#https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/

class Solution(object):
    def appendCharacters(self, s, t):
        s_index, t_index = 0, 0
        s_length, t_length = len(s), len(t)
    
        while s_index < s_length and t_index < t_length:
            if s[s_index] == t[t_index]:
                t_index += 1
            s_index += 1
    
        return t_length - t_index
        
