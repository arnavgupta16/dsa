//https://leetcode.com/problems/house-robber/submissions/1152446340/?envType=daily-question&envId=2024-01-21

class Solution {
public:
    int rob(vector<int>& nums) {
        int rob = 0;
        int norob = 0;
        for (int i = 0; i < nums.size(); i++) {
            int newRob = norob + nums[i];
            int newNoRob = max(norob, rob);
            rob = newRob;
            norob = newNoRob;
        }
        return max(rob, norob);
    }
};
