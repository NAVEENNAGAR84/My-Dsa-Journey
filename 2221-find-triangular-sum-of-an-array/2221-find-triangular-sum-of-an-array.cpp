class Solution {
public:
    int triangularSum(vector<int>& nums) {
      int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
        vector<int>ans(n-1);
         for(int i=0;i<n-1;i++)
         {
            ans[i]=(nums[i]+nums[i+1])%10;
         }
          
          return triangularSum(ans);

        
    }
};