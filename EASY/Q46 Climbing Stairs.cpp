//https://leetcode.com/problems/climbing-stairs/description/?envType=daily-question&envId=2024-01-18


class Solution {
public:
    int climbStairs(int n) {
        int ways = 1;

        for (int i = 1; i <= n / 2; i++) {
            double sum = 1;

            for (int j = i; j < 2 * i; j++) {
                sum *= (double)(n - j) / (j - i + 1);
            }

            ways +=sum;
        }

        return ways;
    }
};

