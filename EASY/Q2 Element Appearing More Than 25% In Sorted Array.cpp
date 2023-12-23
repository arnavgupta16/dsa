//https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/description/

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int sum=0;
        int ans=0;
        int msum=0;
        int n=arr.size();
        if(n<2) return arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                sum++;
            }
            else{
                sum=0;
            }
            if(sum>msum){
                msum=sum;
                ans=arr[i];
            }
            
           
        }
        return ans;
    }
   
};
