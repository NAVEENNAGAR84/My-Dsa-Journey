class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
          return 0;
        int n=nums.size();
    int indx=1;
    int i=1;
     
    for(i;i<n;)
    {
    if(nums[i-1]==nums[i])
       { i++;
        continue;
        }
        else
        {
            nums[indx++]=nums[i];
            i++;
        }
       
    }
    
    return indx;
    
    }
};

