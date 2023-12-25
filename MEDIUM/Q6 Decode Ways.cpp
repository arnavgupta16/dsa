//https://leetcode.com/problems/decode-ways/description/

class Solution {
public:
    int numDecodings(string s) {
      if(s.length()==0 ||s[0]=='0'){
          return 0;
      }  
        else if(s.length()==1){
            return 1;
        }
        int c1=1;
        int c2=1;
        for(int i=1;i<s.length();i++){
            int d = s[i] - '0';
            int d2 = (s[i - 1] - '0')*10 + d;
            int c = 0;
            if(d > 0)
                c += c2;
            if(d2 >= 10 and d2 <= 26)
                c += c1;
            c1 = c2;
            c2 = c;
        }
        return c2; 
        
    }
};
