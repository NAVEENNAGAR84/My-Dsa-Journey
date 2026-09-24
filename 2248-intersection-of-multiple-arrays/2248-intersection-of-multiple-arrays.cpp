class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>ans;
       vector<int>freq(1001,0);
       for(auto &arr:nums)
       {
        for(int x:arr)
        {
            freq[x]++;
        }
       }
       for(int i=1;i<=1000;i++)
       {
        if(freq[i]==nums.size())
        {
            ans.push_back(i);
        }
       }
       return ans;
    
    }
};