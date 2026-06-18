class Solution {
public:
  set<vector<int>>s;
    void getallcombination( vector<int>&arr,int indx,vector<vector<int>>&ans,vector<int>&combine,int target)
    {
        if(indx==arr.size() ||target<0)
         return;

        if(target==0)
        {
            if(s.find(combine)==s.end())
            {
         ans.push_back(combine);
         s.insert(combine);
            }
         return;

        } 
        combine.push_back(arr[indx]);
        getallcombination(arr,indx+1,ans,combine,target-arr[indx]);
        getallcombination(arr,indx,ans,combine,target-arr[indx]);

        combine.pop_back();
        getallcombination(arr,indx+1,ans,combine,target);

    }
    vector<vector<int>> combinationSum(vector<int>& cand, int target) {
        vector<vector<int>>ans;
        vector<int>combine;
         getallcombination(cand,0,ans,combine,target);
         return ans;
        
    }
};