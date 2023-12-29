//https://leetcode.com/problems/find-the-maximum-divisibility-score/description/

class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int x = 0, y = 0,ans = INT_MAX;
        for(auto &i: divisors){
            x = 0;
            for(auto &j: nums){
                if(j%i==0){
                    x++;
                }
            }
            if(x>y){
                y = x;
                ans = i;
            }
            if(x==y){
                ans = min(ans,i);
            }
        }
        return ans;
    }
};
