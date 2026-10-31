class Solution {
public:
    bool hasAlternatingBits(int n) {
        int rem=n%2;
            n=n/2;
            
        while(n>0)
        {
            int rem1=n%2;
            n=n/2;
            if(rem==rem1)
              return false;
            else
            {
               rem=rem1;
            }  

        }
        return true;
    }
};