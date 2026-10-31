class Solution {
public:
    int hammingWeight(int n) {
        long long hw=0;
        while(n>0)
        {
            hw++;
            n=n&(n-1);
        }
        return hw; 
        
    }
};