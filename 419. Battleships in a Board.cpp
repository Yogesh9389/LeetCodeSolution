class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int count=0;
        int row = board.size();
        int col = board[0].size();
        for(int i=0;i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(board[i][j] == 'X')
                {
                    if(i==0 && j==0)
                    {
                        count++;
                    }
                    else if(i==0)
                    {
                        if(board[i][j-1] != 'X')
                        {
                            count++;
                        }
                    }
                    else if(j==0)
                    {
                        if(board[i-1][j] != 'X')
                        {
                            count++;
                        }  
                    }
                    else
                    {
                        if(board[i][j-1] != 'X' && board[i-1][j] != 'X')
                        {
                            count++;
                        }
                    }
                }
            }
        }
        return count;
    }
};