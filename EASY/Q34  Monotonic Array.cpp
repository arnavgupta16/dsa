//https://leetcode.com/problems/monotonic-array/description/?envType=daily-question&envId=2023-12-24

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool flag=0;
        if(nums.size()==1){
            return true;
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]>=nums[i-1]){
                flag=1;
                continue;
            }
            flag=0;
            break;
        }
        if(flag==1){
            return flag;
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                flag=1;
                continue;
                
            }
            flag=0;
            break;
        }
        return flag;

    }
};
