class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest = INT_MIN;
        int secondlargest = INT_MIN;
        int index = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > largest) {
                secondlargest = largest;
                largest = nums[i];

                index = i;
            } else if (secondlargest <nums[i]) {
                secondlargest=nums[i];
                   
            }
        }
        if (largest >= 2 * secondlargest) {
            return index;
        }

        return -1;
    }
};