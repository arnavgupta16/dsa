//https://leetcode.com/problems/arithmetic-slices-ii-subsequence/description/

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        unordered_map<int, vector<int>> nums2mp;
        int len=nums.size();
        vector<vector<int>> dp(len, vector<int>(len));
        int res=0;
        for(int i=0; i<len; i++)
            nums2mp[nums[i]].push_back(i);
        
        for(int i=0; i<len; i++)
        {
            for(int j=0; j<i; j++){
                long long prev=2ll*nums[j] - nums[i];
                if(prev>INT_MAX || prev<INT_MIN)
                    continue;
                auto item = nums2mp.find(prev);
                if(item!=nums2mp.end())
                {
                    for(auto&k: item->second)
                    {
                        if(k>=j) break;
                        dp[i][j]+=dp[j][k]+1;
                    }
                }
                res+=dp[i][j];
            }
            
        }
        return res;
    }
};
