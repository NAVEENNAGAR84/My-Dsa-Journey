class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        int small=INT_MAX;
        for(auto x:nums)
        {
            mp[x]++;
        }
        vector<vector<int>>bucket(nums.size()+1);
        for(auto x:mp)
        {
            int digit=x.first;
            int freq=x.second;
            bucket[freq].push_back(digit);
        }
        for(int i=nums.size();i>=0;i--)
        {
            for(int a:bucket[i])
            {
                if(a%2==0)
                {
                   if(a<small)
                     small=a;
                }

            }
            if(small!=INT_MAX)
              return small;
        }
        return -1;

    }
};