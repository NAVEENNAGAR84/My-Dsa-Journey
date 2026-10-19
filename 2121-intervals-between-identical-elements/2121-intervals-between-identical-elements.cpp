class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int ,vector<int>>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]].push_back(i);
        }
        vector<long long>ans(n);
        for(auto it:mp)
        {
            vector<int>nums=it.second;
            long long sum=0;
            for(auto x:nums)
            {
                sum+=(long long)x;
            }
             long long currsum=0,restsum=0;
            for(int i=0;i<nums.size();i++)
            {
                restsum=sum-currsum-nums[i];
                long long left=nums[i]* (long long)i- currsum;
                long long right=restsum-nums[i]*(long long)(nums.size()-i-1);
                ans[nums[i]]=left+right;
                currsum+=nums[i];

            }

        }
        return ans;
        
    }
};