class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int indx=abs(nums[i])-1;
            if(nums[indx]<0)
            {
                ans.push_back(abs(nums[i]));
            }
            else
            {
                nums[indx]=-nums[indx];
            }
        }
        return ans;
        
    }
};