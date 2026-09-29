class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char, int> mp;
        string r1 = "qwertyuiop";
        string r2 = "asdfghjkl";
        string r3 = "zxcvbnm";
        for (auto ch : r1) {
            mp[ch] = 1;
        }
        for (auto ch : r2) {
            mp[ch] = 2;
        }
        for (auto ch : r3) {
            mp[ch] = 3;
        }
        vector<string> ans;
        for (auto x : words) {
            string s = x;
            int n = s.size();
            int i = 1;
            int row = mp[tolower(s[0])];
            while (i < n && mp[tolower(s[i])] == row) {
                i++;
            }
            if (i == n) {
                ans.push_back(x);
            }
        }
        return ans;
    }
};