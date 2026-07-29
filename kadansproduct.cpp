class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int  res =nums[0];
        int bestmax= nums[0];
        int bestmin = nums[0];


        for(int i=1;i<nums.size();i++)
        {  
            long oldmax=bestmax;
            long  oldmin =bestmin;

            long v1 = bestmax*nums[i];
            long v2 =bestmin*nums[i];
            long v3= nums[i];

            bestmax= max({v1,v2,v3});
            bestmin= min({v1,v2,v3});

            res=max({bestmin,bestmax,res});




            
        }
        return res;
        
    }
};