class Solution {
public:
    int lengthOfLastWord(string s) {
        int temp = 0;
        bool counting = false;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                counting = true;
                temp++;
            } else if (counting) {
                break;
            }
        }
        return temp;
    }
};
