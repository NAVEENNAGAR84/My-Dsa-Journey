class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=0;
        int e=nums.size()-1;
        int ans=0;
        int mid=s+(e-s)/2;
        for(auto x:nums)
        {
            x=abs(nums[mid]-x);
            ans+=x;

        }
        return ans;
    }
};