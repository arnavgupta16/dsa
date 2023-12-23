//https://leetcode.com/problems/merge-sorted-array/description/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=0;
        for(int j=0;j<n;j++){
            nums1[m+j]=nums2[j];
              }
        for(int i=0;i<n+m;i++){
          for(int j=i+1;j<n+m;j++){
              if(nums1[i]>=nums1[j]){
                  int temp=nums1[i];
                  nums1[i]=nums1[j];
                  nums1[j]=temp;
              }
          }
            }
            
        }
      
    
};
