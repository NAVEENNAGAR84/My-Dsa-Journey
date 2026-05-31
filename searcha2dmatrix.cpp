class Solution {
public:
bool searchinrow(vector<vector<int>>& mat, int target,int row)
{
    int n=mat[0].size();
    int st=0,end=n-1;
    while(st<=end)
    {
        int mid=st+(end-st)/2;
        if(target==mat[row][mid])
        {
            return 1;
        }
        else if(target>mat[row][mid])
        {
            st=mid+1;

        }
        else
        {
            end=mid-1;
        }
    }
    return 0;

}
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat[0].size(),m=mat.size();

        int sr=0,er = m-1;
        while(sr<=er)
        {
            int mid=sr+(er-sr)/2;
            if(target>=mat[mid][0] &&target<=mat[mid][n-1])
               return searchinrow(mat, target,mid);
            else if( target>=mat[mid][n-1])
            {
                sr=mid+1;
               
            }
            else
            {
                er=mid-1;
                
                
            }
        }
        return 0; 
    }
};