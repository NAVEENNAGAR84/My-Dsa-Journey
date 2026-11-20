class Solution {
public:
     void getpermutations(vector<int>&nums,vector<vector<int>>&ans,int indx)
     {
        if(indx==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=indx;i<nums.size();i++)
        {
            swap(nums[indx],nums[i]);
              getpermutations(nums,ans,indx+1);
              swap(nums[indx],nums[i]);

        }
     }
    vector<vector<int>> permute(vector<int>& nums) {
      
        vector<vector<int>>ans;
        getpermutations(nums,ans,0);
        return ans;
        
    }
};