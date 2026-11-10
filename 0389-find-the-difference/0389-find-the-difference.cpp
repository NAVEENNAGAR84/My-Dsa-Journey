class Solution {
public:
    char findTheDifference(string s, string t) {
        char ch=0;
        for(auto x:s)
        {
            ch^=x;
        }
        for(auto x: t)
        {
            ch^=x;
        }
        return ch;
        
        
    }
};