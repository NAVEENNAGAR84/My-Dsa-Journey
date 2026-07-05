class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int n=nums.size();
        double avg=0.0;
        double ans=0.0;

        while(j<n)
        {

           avg=avg+(nums[j]/4);

            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                ans=max(ans,avg);

                 avg= avg-(nums[j]/4);
                 i++;
                 j++;
                

            }
        
        }
        return ans;
    
        
    }
};