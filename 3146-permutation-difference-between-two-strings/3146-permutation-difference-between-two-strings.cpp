class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]=i;
        }
        for(int j=0;j<t.size();j++)
        {
            if(mp.find(t[j])!=mp.end())
            {
               ans=ans+abs(j-mp[t[j]]);
            }
        }
        return ans;
        
        
    }
};