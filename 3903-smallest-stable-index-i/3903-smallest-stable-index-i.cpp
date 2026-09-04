class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> prefix(n, 0);
        vector<int> sufix(n, 0);
        prefix[0] = nums[0];
        sufix[n - 1] = nums[n - 1];
        for (int i = 1; i < n; i++) {
            prefix[i] = max(prefix[i - 1], nums[i]);
        }
        for (int j = n - 2; j >= 0; j--) {
            sufix[j] = min(sufix[j + 1], nums[j]);
        }
        for (int i = 0; i < n; i++) {
            int instability_score = prefix[i] - sufix[i];
            if (instability_score <= k) {
                return i;
            }
        }
        return -1;
    }
};