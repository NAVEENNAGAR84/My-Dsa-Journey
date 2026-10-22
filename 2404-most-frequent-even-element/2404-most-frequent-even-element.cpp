class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        int small=INT_MAX;
        for(auto x:nums)
        {
            if(x%2==0) 
              mp[x]++;
        }
        int ans=-1,maxfreq=0;
        for(auto x:mp)
        {
            if(x.second>maxfreq || (x.second==maxfreq && x.first<ans))
             {
                maxfreq=x.second;
                ans=x.first;
             }
        }
        return ans;
        

    }
};