class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        for(int i=n-2;i>=0;i--)
        {
           if( nums[i]<nums[i+1])
           { 
            int pt=i;
            for(int j=n-1;j>pt;j--)
            {
                if(nums[j]>nums[pt])
                {
                    swap(nums[j],nums[pt]);
                    break;
                }

            }
             reverse(nums.begin()+ (pt+1),nums.end());
            return ;
            
           }
            
        
    }
    reverse(nums.begin(),nums.end());

    return ; 
    }
};