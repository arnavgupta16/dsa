//https://leetcode.com/problems/destination-city/description/

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int n = paths.size();
        vector<string> outgoing;
        vector<string> destination;


        for (int i = 0; i < n; i++) {
            outgoing.push_back(paths[i][0]);
            destination.push_back(paths[i][1]);
        }

        string ans;

      
        for (int i = 0; i < n; i++) {
            bool hasOutgoing = false;
            for (int j = 0; j < n; j++) {
                if (destination[i] == outgoing[j]) {
                    hasOutgoing = true;
                    break;
                }
            }

            if (!hasOutgoing) {
                ans = destination[i];
                break;
            }
        }

        return ans;
    }
};

