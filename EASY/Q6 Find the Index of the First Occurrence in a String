//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.length();i++){
            if(needle[0]==haystack[i]){
                for(int j=0;j<needle.length();j++){
                   
                    if(needle[j]!=haystack[i+j]){
                        break;    
                    }
                    if(j==needle.length()-1){
                        return i;
                    }
                    
                }
            }
        }
        return -1;
    }
};
