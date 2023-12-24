//https://leetcode.com/problems/duplicate-zeros/description/

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector <int> ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                ans.push_back(0);
                ans.push_back(0);
            }
            else{
            ans.push_back(arr[i]);
            }
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=ans[i];
        }
        
    }
};
