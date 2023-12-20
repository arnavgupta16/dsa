//https://leetcode.com/problems/single-number/description/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                ans=nums[i];
                return ans;
            }
            else{
                i++;
            }
        }
        return nums[nums.size()-1];
    }
};
