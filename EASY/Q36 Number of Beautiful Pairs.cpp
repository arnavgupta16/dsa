//https://leetcode.com/problems/number-of-beautiful-pairs/description/

class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int first_digit = to_string(nums[i])[0] - '0';
                int last_digit = nums[j] % 10;

                if (gcd(first_digit, last_digit) == 1){
                    count++;
                }
            }
        }

        return count;
    }
};
