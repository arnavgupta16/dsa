//https://leetcode.com/problems/make-array-zero-by-subtracting-equal-amounts/

class Solution {
public:
    int minimumOperations(vector <int>& nums) {
        int count = 0;
        while (true) {
            // Find the minimum non-zero element in the current array
            int min = INT_MAX;
            for (int i = 0; i < nums.size(); i++) {
            if(min>nums[i] && nums[i]!= 0){
                min = nums[i];

            }
            }

            // If min is still INT_MAX, it means all elements are already zero
            if (min == INT_MAX) {
                break;
            }

            // Subtract min from every positive element in nums
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] != 0) {
                    nums[j] -= min;
                }
            }

            count++;
        }

        return count;
    }
};
