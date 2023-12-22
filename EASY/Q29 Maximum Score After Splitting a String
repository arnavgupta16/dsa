//https://leetcode.com/problems/maximum-score-after-splitting-a-string/description/?source=submission-ac

class Solution {
public:
    int maxScore(std::string s) {
        int sum = 0;
        int ans = 0;
        
        // Count the total number of ones in the string
        int totalOnes = 0;
        for (char c : s) {
            totalOnes += (c == '1');
        }

        // Iterate through the string to find the maximum score
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == '0') {
                sum++;  // Increment the count of zeros on the left side
            } else {
                totalOnes--;  // Decrement the count of ones on the right side
            }

            int score = sum + totalOnes;
            if (ans < score) {
                ans = score;
            }
        }

        return ans;
    }
};
