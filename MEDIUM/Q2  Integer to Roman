//https://leetcode.com/problems/integer-to-roman/description/

class Solution {
public:
    string intToRoman(int num) {
        string Roman = "";
        vector<pair<int, string>> storeIntRoman = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
 
        for (int i = 0; i < storeIntRoman.size(); i++) {
            while (num >= storeIntRoman[i].first) {
                Roman += storeIntRoman[i].second;
                num -= storeIntRoman[i].first;
            }
        }
        return Roman;
    }
};

---------------------------------------------------
/*an approach i hardcoded (time limit exceeded :( )
class Solution {
public:
    string intToRoman(int num) {
        vector<string> ans;
        int index = 0, i = 0;
        while (num != 0) {
            if (num > 1000) {
                for (i; i < num / 1000; i++) {
                    ans.push_back("M");
                }
                num -= (i + 1) * 1000;
                i++;
                index = i;
            }
            if (num / 100 == 9) {
                ans.push_back("C");
                ans.push_back("M");
                i += 2;
                index = i;
                num -= 900;
            }
            if (num / 100 == 5) {
                ans.push_back("D");
                i++;
                index = i;
                num -= 500;
            }
            if (num / 100 == 4) {
                ans.push_back("C");
                ans.push_back("D");
                i += 2;
                index = i;
                num -= 400;
            }
            if (num > 100) {
                for (i; i < num / 100 + index; i++) {
                    ans.push_back("C");
                }
                num -= (i + 1) * 100;
                index = i;
            }
            if (num / 10 == 5) {
                ans.push_back("L");
                i++;
                index = i;
                num -= 50;
            }
            if (num / 100 == 4) {
                ans.push_back("X");
                ans.push_back("L");
                i += 2;
                index = i;
                num -= 40;
            }
            if (num / 10 == 9) {
                ans.push_back("X");
                ans.push_back("C");
                i += 2;
                index = i;
                num -= 90;
            }
            if (num > 10) {
                for (i; i < num / 10 + index; i++) {
                    ans.push_back("X");
                }
                num -= (i + 1) * 10;
                index = i;
            }
            if (num / 1 == 9) {
                ans.push_back("I");
                ans.push_back("X");
                i += 2;
                index = i;
                num = 0;
                break;
            }
            if (num / 1 == 5) {
                ans.push_back("V");
                i++;
                index = i;
                num -= 5;
            }
            if (num / 1 == 4) {
                ans.push_back("I");
                ans.push_back("V");
                break;
            }
            if (num > 1) {
                for (i; i < num / 1 + index; i++) {
                    ans.push_back("I");
                }
                break;
            }
        }
        string result;
        for (const string& s : ans) {
            result += s;
        }
        return result;
    }
};
*/
