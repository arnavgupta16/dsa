//https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/description/

class Solution {
public:
    bool makeEqual(std::vector<std::string>& words) {
        if (words.size() == 0 || words.size() == 1) {
            return true;
        }

        
        std::unordered_map<char, int> charCount;
        for (const std::string& word : words) {
            for (char ch : word) {
                charCount[ch]++;
            }
        }

        
        for (const auto& entry : charCount) {
            if (entry.second % words.size() != 0) {
                return false;
            }
        }

        return true;
    }
};
