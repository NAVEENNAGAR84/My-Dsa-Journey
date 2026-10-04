class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int left = 0;
        long long currentsum = 0;
        long long maxsum = 0;

        for (int right = 0; right < nums.size(); right++) {
            currentsum += nums[right];
            mp[nums[right]]++;
            if (right - left + 1 > k) {
                currentsum -= nums[left];
                mp[nums[left]]--;
                
                if (mp[nums[left]] == 0) {
                    mp.erase(nums[left]);
                }
                left++;
            }
            if (right - left + 1 == k && mp.size() == k) {
                maxsum = max(currentsum, maxsum);
            }
        }
        return maxsum;
    }
};