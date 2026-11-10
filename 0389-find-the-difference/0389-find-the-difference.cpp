class Solution {
public:
    char findTheDifference(string s, string t) {
        char ch=' ';
        unordered_map<int,int>mp;
        for(auto x:s)
        {
            mp[x]++;
        }
        for(auto x:t)
        {
            if(mp.find(x)!=mp.end())
            {
                mp[x]--;
                if(mp[x]==0)
                {
                    mp.erase(x);
                }
            }
            else{
                ch=x;

            }
        }
        return ch;

        
    }
};