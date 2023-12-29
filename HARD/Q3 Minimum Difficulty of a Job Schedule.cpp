//https://leetcode.com/problems/minimum-difficulty-of-a-job-schedule/description/

class Solution {
    int dp[12][302];
    public:
    int minDifficulty(vector<int>& arr, int day) {
        int n = arr.size();
        
        //illegal
        if(n<day) return -1;

        // initialize.
        for(int i=0;i<=day;i++){
            for(int j=0;j<=n;j++){
                dp[i][j] = 1e6; 
            }
        } 
        // base case. d=1
        for(int i=0;i<n;i++)
        { 
            // returns max element between ith and nth index
            dp[1][i] = *std::max_element(arr.begin()+i,arr.begin()+n);
        }
        
        // normal segemt
        for(int d= 2;d<=day;d++){
            for(int i=0;i<n;i++){
                // taking too manys days.. illegal case check
                if(n-i<d){
                    dp[d][i] = 1e6;
                    continue;
                }
                
                //segment with this loop.
                for(int j=i;j<n;j++){
                    dp[d][i] = min(dp[d][i],
                                   *std::max_element(arr.begin()+i,arr.begin()+j+1)
                                   +dp[d-1][j+1]);
                }
            }
        }
        return dp[day][0];
    }
};
