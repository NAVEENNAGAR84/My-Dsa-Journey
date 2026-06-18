class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
      int n=mat.size(); int m= mat[0].size();
      int srow=0,erow=n-1;
      int scol=0,ecol=m-1;
      vector<int>ans;
      while(srow<=erow && scol<=ecol)
      {
        for(int i=scol;i<=ecol;i++)
        {
          ans.push_back(mat[srow][i]);
        }
        for(int j=srow+1;j<=erow;j++)
        {
          ans.push_back(mat[j][ecol]);
        }
        for(int j=ecol-1;j>=scol;j--)
        {
            if(srow==erow)
               break;
          ans.push_back(mat[erow][j]);
        }
        for(int i=erow-1;i>=srow+1;i--)
        {
            if(scol==ecol)
              break;
           ans.push_back(mat[i][scol]);
        }
        srow++;
        scol++;
        erow--;
        ecol--;
         }
         return ans;
        
    }
};