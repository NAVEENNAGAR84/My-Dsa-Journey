class Solution {
public:
    void lpsfind(vector<int>&lps, string s) {
        int pre = 0, suf = 1;
        while (suf < s.size()) {
            if (s[pre] == s[suf]) {
                lps[suf] = pre + 1;
                pre++;
                suf++;

            } else {
                if (pre == 0) {
                    lps[suf] = 0;
                    suf++;
                } else {
                    pre = lps[pre - 1];
                }
            }
        }
    }
    int kmp_match(string h, string n) {
        vector<int> lps(n.size(), 0);
        lpsfind(lps, n);
        int first = 0, second = 0;
        while (first < h.size() && second < n.size()) {
            if (n[second] == h[first]) {
                first++;
                second++;
            } else {
                if (second == 0) {
                    first++;
                } else {
                    second = lps[second - 1];
                }
            }
        }
        if (second == n.size())
            return 1;
        return -1;
    }
    int repeatedStringMatch(string a, string b) {
        if (a == b)
            return 1;
        string temp = a;
        int repeat = 1;
        while (temp.size() < b.size()) {
            temp += a;
            repeat++;
        }
        if (kmp_match(temp, b)==1)
            return repeat;
        if (kmp_match(temp + a, b)==1)
            return repeat+1;

        return -1;
    }
};