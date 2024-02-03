//https://leetcode.com/problems/partition-array-for-maximum-sum/description/?envType=daily-question&envId=2024-02-03

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int maxSumAfterPartitioning(std::vector<int>& arr, int k) {
        // Length of the input array
        int n = arr.size();

        // Dynamic programming table to store maximum sum at each position
        std::vector<int> dp(n + 1, 0);

        // Iterate through the array elements
        for (int i = 0; i < n; i++) {
            int curMax = 0, curSum = 0;

            // Iterate over the last k elements or until the beginning of the array
            for (int j = i; j >= std::max(0, i - k + 1); j--) {
                // Update the maximum value in the current partition
                curMax = std::max(curMax, arr[j]);

                // Calculate the current sum considering the maximum value in the partition
                int cur = curMax * (i - j + 1) + dp[j];

                // Update the current sum if the new one is greater
                curSum = std::max(curSum, cur);
            }

            // Update the dynamic programming table with the maximum sum at the current position
            dp[i + 1] = curSum;
        }

        return dp[n];
    }
};
