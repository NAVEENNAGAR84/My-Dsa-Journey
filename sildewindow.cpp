class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
    int i=0;
    int j=0;
    int n=nums.size();
    int ans=0;
 unordered_map<int ,int>mp;

    while(j<n)
    {
        mp[nums[j]]++;
        while(mp[0]>k)
        {
            mp[nums[i]]--;
            i++;
            

        }
        ans=max(ans,j-i+1);
        j++;

    }
    return ans;
        
    }
};