class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k<0)
         return 0;
         int ans=0;
         unordered_map<int,int>mp;
         for(auto x:nums)
         {
            mp[x]++;
         }
        for(auto y:mp)
        {
            if(k==0)
            {
                if(y.second>=2)
                  ans++;
            }
            else
            {
                if(mp.find(y.first+k)!=mp.end())
                {
                     ans++;
                }
            }
        }
        return ans;


    }
};