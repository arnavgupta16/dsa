//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = prices[0];
        int maxProfit = 0;
        for (int i = 1; i < n; i++)
        {
            if (prices[i] < buy) buy = prices[i];
            else
            {
                if (prices[i] - buy > maxProfit) maxProfit = prices[i] - buy;
            }
        }
        return maxProfit;
    }
};
