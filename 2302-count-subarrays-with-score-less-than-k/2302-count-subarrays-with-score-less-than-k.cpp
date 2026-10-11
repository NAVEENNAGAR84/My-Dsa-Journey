class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
          int i=0,j=0;
        int n=nums.size();
        long long product=1;
        long long count=0;
        long long  sum=0;
        while(j<n)
        {
            sum+=nums[j];
            product=sum*(j-i+1);
            while(product>=k && i<=j)
            {
                  sum-=nums[i];
                  i++;
                  product=sum*(j-i+1);
            }
            count+=1+(j-i);
            j++;

        }
        return count;
        
        
    }
};