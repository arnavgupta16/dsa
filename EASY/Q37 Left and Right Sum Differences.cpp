//https://leetcode.com/problems/left-and-right-sum-differences/description/

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector <int> ans;
        int leftsum=0;
        int rightsum=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(j<i){
                    leftsum+=nums[j];
                }
                if(j>i){
                    rightsum+=nums[j];
                }
            }
            if(leftsum-rightsum<0){
                ans.push_back((leftsum-rightsum)*(-1));
            }
            else{
                ans.push_back(leftsum-rightsum);
            }
            leftsum=0;
            rightsum=0;
        }
        return ans;
    }
};
