//https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/description/

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector <int> arr;
        for(int i=0;i<points.size();i++){
            arr.push_back(points[i][0]);
        }
        sort(arr.begin(),arr.end());
        int ans=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1]>=ans){
                ans=arr[i]-arr[i-1];
            }
        }
        return ans;
    }
};
