class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";

        for (int col = 0; col < strs[0].size(); col++) {
            char c = strs[0][col];

            for (int row = 1; row < strs.size(); row++) {
                if (strs[row][col] != c) {
                    return res;
                }
            }

            res += c;
        }

        return res;
    }
};