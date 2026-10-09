class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int indx = abs(nums[i]) - 1;
            if (nums[indx] > 0) {
                nums[indx] = -nums[indx];
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                ans.push_back(i + 1);
            }
        }
        return ans;
    }
};