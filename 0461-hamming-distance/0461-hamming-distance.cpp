class Solution {
public:
    int hammingDistance(int x, int y) {
      
        int dist=0;
        while(x>0||y>0)
        {
            int rem1=x%2;
             x=x/2;
             int rem2=y%2;
              y=y/2;
              if(rem1!=rem2)
                dist++;
        }
        return dist;
        
    }
};