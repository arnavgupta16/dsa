//https://leetcode.com/problems/special-positions-in-a-binary-matrix/description/

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int ans=0;      
        vector<int>rowsum(n,0);
         vector<int>colsum(m,0);
        

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                rowsum[i]+=mat[i][j];
                colsum[j]+=mat[i][j];
            }
        }
        
    
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               if(mat[i][j]==1 && rowsum[i]==1 && colsum[j]==1)
               {
                  
                   ans++;
               }
            }
        }
        return ans;
        
    }
};
