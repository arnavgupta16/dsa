//https://leetcode.com/problems/minimum-falling-path-sum/?envType=daily-question&envId=2024-01-19

int dp[101][101];
int n;

int find(int x, int y, vector<vector<int>>& g)
{
    if(x == n)
        return 0;

    if(dp[x][y] != -100000)
        return dp[x][y];

    int ans = g[x][y] + find(x+1, y, g);

    if(y-1>=0)
        ans = min(ans, g[x][y] + find(x+1, y-1, g) );

    if(y+1!=n)
        ans = min(ans, g[x][y] + find(x+1, y+1, g) );
    
    return dp[x][y] = ans;
}

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        
        n = mat.size();
        int ans = 1e9;
        
        for(int i=0; i<101; ++i)
            for(int j=0; j<101; ++j)
                dp[i][j] = -100000;

        for(int i=0; i<mat.size(); ++i)
            ans = min(ans, find(0, i, mat));
        
        return ans;
    }
};
