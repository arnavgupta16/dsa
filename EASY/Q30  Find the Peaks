//https://leetcode.com/problems/find-the-peaks/

class Solution {
public:
    std::vector<int> findPeaks(std::vector<int>& mountain) {
        std::vector<int> ans;
        for (int i = 1; i < mountain.size() - 1; i++) {
            if (mountain[i] > mountain[i - 1] && mountain[i] > mountain[i + 1]) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
