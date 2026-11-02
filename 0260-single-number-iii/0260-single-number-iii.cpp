class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xr=0;
        for(auto x:nums)
        {
            xr=xr^x;
        }
        unsigned int rightmostbit= (unsigned int) xr & (-(unsigned int)xr);
        int a=0;
        int b=0;
        for(auto x:nums)
        {
            if(x &rightmostbit)
            {
                a=a^x;
            }
            else
            {
                b=b^x;
            }
        }
        return { a,b};
        
    }
};