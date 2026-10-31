class Solution {
public:
    int hammingWeight(int n) {
        long long hw=0;
        while(n>0)
        {
            long long rem=n%2;
            n=n/2;
            if(rem==1)
             hw++;

        }
        return hw; 
        
    }
};