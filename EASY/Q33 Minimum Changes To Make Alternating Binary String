//https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/description/?envType=daily-question&envId=2023-12-24

class Solution {
public:
    int minOperations(string s) {
        int one=0;
        int zero=0;
        for(int i=0;i<s.length();i++){
            if(i%2==0 && s[i]!='1'){
                zero++;
            }
            else if(i%2!=0 && s[i]!='0'){
                zero++;
            }
        }
        for(int i=0;i<s.length();i++){
            if(i%2==0 && s[i]!='0'){
                one++;
            }
            else if(i%2!=0 && s[i]!='1'){
                one++;
            }
        }
        if(zero>=one)
            return one;
        return zero;
    }
};
