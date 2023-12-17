//https://leetcode.com/problems/valid-palindrome/description/

class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(int i=0;i<s.length();i++){
            if(s[i]<91 && s[i]>64){
                s[i]+=32;
                ans.push_back(s[i]);
            }
            else if(s[i]>96 && s[i]<123 ){
                ans.push_back(s[i]);
            }
            else if(s[i]<=57 && s[i]>=48){
                ans.push_back(s[i]);
            }
        }
       
        for(int i=0;i<ans.length();i++){
            if(ans[i]!=ans[ans.length()-1-i]){
                return false;
            }
        }
        return true;
    }
};
