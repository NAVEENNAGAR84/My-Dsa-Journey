class Solution {
public:
    int maxPower(string s) {
        int length = 1;
        int maxlength = 1;
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == s[i + 1]) {
                length++;

            } else {
                length = 1;
            }
            maxlength = max(maxlength, length);
        }
        return maxlength;
    }
};