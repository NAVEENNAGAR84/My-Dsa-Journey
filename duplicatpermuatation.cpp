class Solution {
public:
void getpermutation(vector<int>&nums,vector<vector<int>>&ans,int indx)
{
    if(indx==nums.size())
    {
        ans.push_back(nums);
        return ;
    }
    unordered_set<int>used;
    for(int i=indx;i<nums.size();i++)
    {
        if(used.count(nums[i]))
         continue;   
        used.insert(nums[i]);  
        swap(nums[indx],nums[i]);
        getpermutation(nums,ans,indx+1);
        swap(nums[indx],nums[i]);
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
           sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        getpermutation(nums,ans,0);
        return ans;

        
    }
};