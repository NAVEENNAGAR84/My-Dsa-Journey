class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int c : nums) {
            mp[c]++;
        }
        vector<vector<int>> bucket(nums.size() + 1);
        for (auto x : mp) {
            int digit = x.first;
            int freq = x.second;
            bucket[freq].push_back(digit);
        }
    vector<int>ans;
        for(int i=nums.size();i>=0;i--)
        {
            for(int num:bucket[i])
            {
                ans.push_back(num);
                if(ans.size()==k)
                 return ans;
            }
        }
      return ans;

    }
};