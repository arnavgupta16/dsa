//https://leetcode.com/problems/length-of-last-word/

class Solution {
public:
    int lengthOfLastWord(string s) {
       int ans=0;
       int ans1=0;
       for(int i=0;i<s.length();i++){
           if(s[i]==' '){
               ans=0;
               continue;
           }
           else{
               ans++;
               ans1=ans;
           }
       } 
       return ans1;
    }
};
