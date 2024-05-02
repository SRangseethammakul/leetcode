class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        for (int i = 0; i < strs[0].size(); i++) {
            char check = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (check != strs[j][i]) {
                    return prefix;
                }
            }
            prefix += check;
        }
        return prefix;
    }
};
