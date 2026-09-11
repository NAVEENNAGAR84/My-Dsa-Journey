class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0;
        for(int a:nums)
        {
            sum+=a;
        }
        int leftsum=0;
        for(int i=0;i<nums.size();i++)
        {
            int rightsum =sum-nums[i]-leftsum;
            if(leftsum==rightsum)
              return i;
            leftsum+=nums[i];  
        }
        return -1;
        
    }
};