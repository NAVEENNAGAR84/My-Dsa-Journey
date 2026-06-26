class Solution {
public:
    void ps(vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans,
            int i) {
        if (i == nums.size()) {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        ps(nums, temp, ans, i + 1);
        temp.pop_back();
        ps(nums, temp, ans, i + 1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;

        ps(nums, temp, ans, 0);
        return ans;
    }
};