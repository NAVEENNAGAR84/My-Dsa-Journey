class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0,j=0;
        int n=nums.size();
        int product=1;
        int count=0;
        while(j<n)
        {
            product*=nums[j];
            while(product>=k && i<=j)
            {
                product/=nums[i];
                  i++;
            }
            count+=1+(j-i);
            j++;

        }
        return count;
        
    }
};