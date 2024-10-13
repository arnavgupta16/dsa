#https://leetcode.com/problems/rank-transform-of-an-array/description/?envType=daily-question&envId=2024-10-13

class Solution(object):
    def arrayRankTransform(self, arr):
        
        arr_copy = arr[:]
        arr_copy.sort()
        rank=1
        rank_map={}
        for val in arr_copy:
            if val not in rank_map:
                rank_map[val] = rank
                rank+=1
        
        result = [rank_map[val] for val in arr]

        return result

        
        
