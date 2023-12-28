//https://leetcode.com/problems/string-compression-ii/description/?envType=daily-question&envId=2023-12-28

class Solution {
public:
    
    int getLength(int count){

        // suppose a is coming 9 times , so we write a9 - length(a9) = 2
        // count>=10 - suppose 15 times , so length(a15) string = 3
        
        if(count==1)return 1; 
        else{
            if(count<10)return 2; 
            else{
                if(count<100)return 3; 
                else return 4;  
            }
        }
    }
    
    
    int getLengthOfOptimalCompression(string s, int k) {
        
        int n = s.size();
        
        int dp[n+1][k+1];
        
        for(int i=n;i>=0;i--){
            for(int j=0;j<=k;j++){
                
                // declare the base case - initial length declare
                if(i == n) { dp[n][j] = 0;  continue;}
                
                // case 1 - delete the ith character if possible (j>0)
                dp[i][j] = j>0 ? dp[i+1][j-1]:INT_MAX;
                
                // case 2-  we keep the ith index.
                
                //we have to find the current char's index end point
                
                int possible_del = j,count=0;
                for(int end =i;end<n&&possible_del>=0 ;end++){
                    // check about the same char "b b b .." for encoding
                    if(s[end] == s[i]){
                        count++;
                        
                        // assumeing the block end here "aaaa"
                        dp[i][j] = min(dp[i][j] , getLength(count)+dp[end+1][possible_del]);
                    }
                    else { 
                        // this character should be deleted. to make length min.
                        possible_del--;
                    }
                }
                
                
            }
        }
        
        return dp[0][k];
    }
};
