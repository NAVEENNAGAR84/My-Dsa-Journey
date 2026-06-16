class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n= nums.size();
        int i=0;
        int count =0;
        int res=0;
        while(i<n)
        {
            if(nums[i]==0)
            {
                res=max(res,count);
                count=0;
            }
            else
            {
             
            count++;
            res=max(res,count);
               }
            i++;
        
        }
        
        return res;
        
        
    }
};