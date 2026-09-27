class Solution {
public:
    int numJewelsInStones(string j, string s) {
        unordered_set<char>st;
        for(auto ch:j)
        {
            st.insert(ch);
        }
        int count=0;
        for(auto ch:s)
        {
            if(st.find(ch)!=st.end())
            {
                count++;
            }
        }
        return count;
    }
};