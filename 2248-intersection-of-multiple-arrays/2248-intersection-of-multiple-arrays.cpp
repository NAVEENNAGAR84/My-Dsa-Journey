class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int, int> mp;
        vector<int> ans;

        for (auto& arr : nums) {
            for (auto x : arr) {
                mp[x]++;
                if (mp[x] == nums.size()) {
                    ans.push_back(x);
                }
            }
        }
         sort(ans.begin(),ans.end());
        return ans;
    }
};