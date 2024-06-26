class Solution {
public:
    int convert(char r) {
        switch (r) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        }
        return -1;
    }
    int romanToInt(string s) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            int temp = convert(s[i]);
            int nextTemp = 0;
            if (i + 1 < s.length()) {
                nextTemp = convert(s[i + 1]);
            }
            if (temp < nextTemp) {
                sum -= temp;
            } else {
                sum += temp;
            }
        }
        return sum;
    }
};
