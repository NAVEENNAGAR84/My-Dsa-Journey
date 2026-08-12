class Solution {
public:
  bool dfs(vector<vector<char>>& board, string word,int row,int col,int indx)
  {
    if(indx==word.size())
      return true;
     if(row<0 || col<0 || row>=board.size() || col>=board[0].size())
     {
        return false;
     } 
     if(board[row][col]!=word[indx])
       return false;
     char temp = board[row][col];
      board[row][col] ='*';
      bool found = dfs(board,word,row-1,col,indx+1)||dfs(board,word,row+1,col,indx+1)||dfs(board,word,row,col+1,indx+1)||dfs(board,word,row,col-1,indx+1);
       board[row][col]=temp;
        
        return found;


  }
    bool exist(vector<vector<char>>& board, string word) {
        int row=board.size();
        int col=board[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(dfs(board,word,i,j,0))
                  return true;
            }
        }
        return false;



        
    }
};