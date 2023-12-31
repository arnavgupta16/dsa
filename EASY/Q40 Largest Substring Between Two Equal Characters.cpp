https://leetcode.com/problems/largest-substring-between-two-equal-characters/description/

class Solution {
public:
    int maxLengthBetweenEqualCharacters(std::string s) {
        std::unordered_map<char, int> lastIndex;
        int maxLength = -1;

        for (int i = 0; i < s.length(); ++i) {
            if (lastIndex.find(s[i]) != lastIndex.end()) {
                maxLength = std::max(maxLength, i - lastIndex[s[i]] - 1);
            } else {
                lastIndex[s[i]] = i;
            }
        }

        return maxLength;
    }
};
