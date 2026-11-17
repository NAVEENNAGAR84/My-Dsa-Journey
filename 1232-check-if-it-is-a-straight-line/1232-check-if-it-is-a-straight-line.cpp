class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        int x=c[1][0]-c[0][0];
        int y=c[1][1]-c[0][1];
        for(int i=2;i<c.size();i++)
        {
            int x1=c[i][0]-c[0][0];
            int y1=c[i][1]-c[0][1];
            if(x*y1!=y*x1)
             return false;
        }
        return true;
        
    }
};