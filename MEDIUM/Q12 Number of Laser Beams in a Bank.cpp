//https://leetcode.com/problems/number-of-laser-beams-in-a-bank/description/

#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0, prev=0;
        for(auto& row: bank){
            int device=count(row.begin(), row.end(), '1');
            if (device>0){
                ans+=device*prev;
                prev=device;
            }
        }
        return ans;
    }
};
