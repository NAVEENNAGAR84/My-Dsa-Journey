class Solution {
public:
    string removeOccurrences(string s, string part) {
        int m = part.size();
        while (s.find(part) != string::npos) {
            int n = s.find(part);
            s.erase(n, m);
        }
        return s;
    }
    };