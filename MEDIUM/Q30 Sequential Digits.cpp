//https://leetcode.com/problems/sequential-digits/description/

class Solution {
public:
    void find( vector<int> &res, int num, int high, int low, int pd){
        if(num>=low && num<=high){
            res.push_back(num);
        }
        if(num<=high && pd<9){
            pd = pd+1;
            num = num*10 + pd;
            find( res, num, high, low, pd);
        }
    }
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;
        for(int i=0; i<9; i++)
            find(res, 0, high, low, i);
        sort(res.begin(), res.end());
        return res;
    }
};
