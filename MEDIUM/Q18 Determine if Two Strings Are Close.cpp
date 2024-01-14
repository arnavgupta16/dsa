//https://leetcode.com/problems/determine-if-two-strings-are-close/description/

class Solution {
public:
    bool closeStrings(std::string word1, std::string word2) {
        std::array<int, 26> charCount1 = {}; 
        std::array<int, 26> charCount2 = {}; 
        for (char c : word1) {
            ++charCount1[c - 'a'];
        }

        for (char c : word2) {
            ++charCount2[c - 'a'];
        }

        for (int i = 0; i < 26; ++i) {
            bool charPresentWord1 = charCount1[i] > 0;
            bool charPresentWord2 = charCount2[i] > 0;

            if ((charPresentWord1 && !charPresentWord2) || (!charPresentWord1 && charPresentWord2)) {
                return false;
            }
        }

        std::sort(charCount1.begin(), charCount1.end());
        std::sort(charCount2.begin(), charCount2.end());

        for (int i = 0; i < 26; ++i) {
            if (charCount1[i] != charCount2[i]) {
                return false;
            }
        }

        return true;
    }
};
