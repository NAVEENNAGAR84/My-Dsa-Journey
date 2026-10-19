class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]].push_back(i);
        }
        vector< long long>ans(n);
        for(auto it:mp)
        {
            vector<int>arr=it.second;
            long long sum=0;
            for(int x:arr)
            {
                sum+=(long long)x;
            }
            long long currsum=0,restsum=0;
            for(int i=0;i<arr.size();i++)
            {
                restsum= sum - arr[i]-currsum;
                long long left= arr[i]* (long long)i -currsum;
                long long right=restsum - arr[i]*(long long)(arr.size()-i-1);
                ans[arr[i]]=left+right;
                currsum+=arr[i];

                
            }
        }
        return ans;
        
    }
};