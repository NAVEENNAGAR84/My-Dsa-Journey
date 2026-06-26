class Solution {
public:
   void ps(vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans,int i)
   {

    if(i==nums.size())
      {
        ans.push_back(temp);
        return;

      }
      temp.push_back(nums[i]);
      ps(nums,temp,ans,i+1);
      temp.pop_back();// back track
      int index=i+1;
      while(index<nums.size() && nums[index]==nums[index-1])
      {
        index++;
      }
      ps(nums,temp,ans,index);
   }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        vector<int>temp;
        vector<vector<int>>ans;
        ps(nums,temp,ans,0);
        return ans;
        
    }
};