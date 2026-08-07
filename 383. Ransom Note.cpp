class Solution {
public:
    bool canConstruct(string r, string m) {
        if (r.size() > m.size())
            return false;
        vector<int>freq(26,0);
        for (auto ch : m) {
           freq[ch-'a']++;
        }
        for (auto a : r) {

            if(freq[a-'a']!=0)
            {
                freq[a-'a']--;
           
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};