//https://leetcode.com/problems/longest-common-subsequence/description/?envType=daily-question&envId=2024-01-25

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        if (text1.length() < text2.length()) {
            return LCS(text1, text2);
        }
        return LCS(text2, text1);
    }

    int LCS(string s1, string s2) {
        vector<int> dp(s1.length() + 1, 0);

        for (int i = 1; i <= s2.length(); i++) {
            int prev = 0;
            for (int j = 1; j <= s1.length(); j++) {
                int temp = dp[j];
                if (s1[j - 1] == s2[i - 1]) {
                    dp[j] = prev + 1;
                } else {
                    dp[j] = max(dp[j - 1], dp[j]);
                }
                prev = temp;
            }
        }
        return dp[s1.length()];
    }
};
