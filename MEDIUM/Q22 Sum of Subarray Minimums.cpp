//https://leetcode.com/problems/sum-of-subarray-minimums/description/?envType=daily-question&envId=2024-01-20

#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size(), mod=1e9+7;
        vector<long long> dp(n, -1); // dp[i]=sum of subarrays ending at i
        vector<int> stack;
        long long ans=0;
        for(int i=0; i<n; i++){
            //monotonic increasing stack storing the index
            while(!stack.empty() && arr[i]<=arr[stack.back()])
                stack.pop_back();
            if (!stack.empty()){
                int j=stack.back();
                dp[i]=dp[j]+arr[i]*(i-j);
            }
            else dp[i]=arr[i]*(i+1);
            stack.push_back(i);
            ans=(ans+dp[i])%mod;
        }
        return ans;      
    }
};

auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
