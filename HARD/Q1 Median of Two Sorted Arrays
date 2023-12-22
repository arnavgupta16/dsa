//https://leetcode.com/problems/median-of-two-sorted-arrays/submissions/1125948256/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for (int i = 0; i < nums2.size(); i++) {
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(), nums1.end());

        int median = 0;
        if (nums1.size() % 2 == 0) {
            median = nums1.size() / 2;
            return (nums1[median - 1] + nums1[median]) / 2.0;
        } else {
            median = nums1.size() / 2;
            return nums1[median];
        }
    }
};
