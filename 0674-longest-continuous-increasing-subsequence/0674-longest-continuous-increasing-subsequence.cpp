class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int length=1;
        int maxlength=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
            {
               length++;
            }
            else
            {
                length=1;
            }
            maxlength=max(maxlength,length);
        }
        return maxlength;
        
    }
};