class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        bool firstrowflag = false;
        bool firstcolumnflag = false;

        for (int i = 0; i < n; i++) {
            if (mat[0][i] == 0) {

                firstrowflag = true;
                break;
            }
        }
        for (int j = 0; j < m; j++) {
            if (mat[j][0] == 0) {
                firstcolumnflag = true;
            }
        }
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (mat[i][j] == 0) {
                    mat[i][0] = 0;
                    mat[0][j] = 0;
                }
            }
        }
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(mat[i][0]==0||mat[0][j]==0)
                {
                    mat[i][j]=0;
                }
            }
        }
        if(firstrowflag)
        {
            for(int i=0;i<n;i++)
            {
                mat[0][i]=0;
            }
        }
        if(firstcolumnflag)
        {
            for(int j=0;j<m;j++)
            {
                mat[j][0]=0;
            }
        }
    }
};