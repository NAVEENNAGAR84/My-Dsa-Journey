class Solution {
public:

   void dfs(vector<vector<char>>&board,int i,int j)
   {
    int row=board.size();
    int col=board[0].size();
      if(i<0 || j<0 || j>=col ||i>=row || board[i][j]!='O')
        return ;
    board[i][j]='#';
    int dr[]={0,0,1,-1};
    int dc[]={1,-1,0,0};
    for(int k=0;k<4;k++)
    {
        int newraw=i+dr[k];
        int newcol=j+dc[k];
        dfs(board,newraw,newcol);
        
    }
   }
    void solve(vector<vector<char>>& board) {
        int row=board.size();
        int col=board[0].size();
        for(int i=0;i<col;i++)
        {
            if(board[0][i]=='O')
             dfs(board,0,i);
        }
        for(int i=0;i<col;i++)
        {
            if(board[row-1][i]=='O')
             dfs(board,row-1,i);
        }
        for(int j=0;j<row;j++)
        {
            if(board[j][0]=='O')
             dfs(board,j,0);
        }
        for(int j=0;j<row;j++)
        {
            if(board[j][col-1]=='O')
              dfs(board,j,col-1);
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(board[i][j]=='#')
                  board[i][j]='O';
                else
                  board[i][j]='X';  
            }
        }
        return ;
        
    }
};