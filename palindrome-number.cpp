class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        if (x >= 0 && x <= 9) {
            return true;
        }
        if (x % 10 == 0) {
            return false;
        }
        int temp = 0;
        int originalX = x;
        while (originalX > temp) {
            temp = temp * 10;
            temp = temp + (originalX % 10);
            originalX = originalX / 10;
        }
        if ((originalX == temp) || (originalX == (temp / 10))) {
            return true;
        }
        return false;
    }
};
