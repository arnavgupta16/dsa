//https://leetcode.com/problems/longest-increasing-subsequence/description/

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        set<int> st;
        vector<int> v;
        int n=nums.size();
        for(auto i: nums){
            st.insert(i);
        }
        for(auto i: st){
            v.push_back(i);
        }
        vector<vector<int>> dp(n+1,vector<int>(v.size()+1,0));
        for(int i=n-1;i>=0;i--){
            for(int j=v.size()-1;j>=0;j--){
                if(nums[i]==v[j]){
                    dp[i][j]=1+dp[i+1][j+1];
                }
                else{
                    dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
                }
            }
        }
        return dp[0][0];
    }
};
