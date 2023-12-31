//https://leetcode.com/problems/image-smoother/description/?envType=daily-question&envId=2023-12-19

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> ans(img.size(), vector<int>(img[0].size(), 0));

        for (int i = 0; i < img.size(); i++) {
            for (int j = 0; j < img[0].size(); j++) {
                int denominator = 0;
                int numerator = 0;

                if (i - 1 >= 0) {
                    numerator += img[i - 1][j];
                    denominator++;
                }
                if (i + 1 < img.size()) {
                    numerator += img[i + 1][j];
                    denominator++;
                }
                if (i + 1 < img.size() && j + 1 < img[0].size()) {
                    numerator += img[i + 1][j + 1];
                    denominator++;
                }
                if (i + 1 < img.size() && j - 1 >= 0) {
                    numerator += img[i + 1][j - 1];
                    denominator++;
                }
                if (i - 1 >= 0 && j - 1 >= 0) {
                    numerator += img[i - 1][j - 1];
                    denominator++;
                }
                if (i - 1 >= 0 && j + 1 < img[0].size()) {
                    numerator += img[i - 1][j + 1];
                    denominator++;
                }
                if (j + 1 < img[0].size()) {
                    numerator += img[i][j + 1];
                    denominator++;
                }
                if (j - 1 >= 0) {
                    numerator += img[i][j - 1];
                    denominator++;
                }

                numerator += img[i][j];
                denominator++;
                ans[i][j] = numerator / denominator;
            }
        }

        return ans;
    }
};
