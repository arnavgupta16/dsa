//https://leetcode.com/problems/plus-one/description/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
          
    for(int i=digits.size()-1;i>=0;i--)
    {
      if(digits[i]!=9)
      {
        digits[i]=digits[i]+1;
        break;
      }
      else
        digits[i]=0;
    }  
     if(digits[0]==0)
     {
         digits.insert(digits.begin(),1);
     }
       return digits;
    }
    
};
