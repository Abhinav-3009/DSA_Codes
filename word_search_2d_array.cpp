class Solution
{
    bool dfsRec(
                    vector<vector<char>> &board, 
                    string word, 
                    vector<vector<bool>> &visited, 
                    int wordIndex,
                    int boardX,
                    int boardY
                )
    {
        if(wordIndex == word.size())
        {
            return true;
        }
        
        if(
                boardX >= 0 and boardX < board.size() and
                boardY >= 0 and boardY < board[0].size() and
                visited[boardX][boardY] == false and
                word[wordIndex] == board[boardX][boardY]
        )
        {
            visited[boardX][boardY] = true;
            
            if(
                    dfsRec(board, word, visited, wordIndex + 1, boardX - 1, boardY + 0) or
                    dfsRec(board, word, visited, wordIndex + 1, boardX + 0, boardY + 1) or
                    dfsRec(board, word, visited, wordIndex + 1, boardX + 1, boardY + 0) or
                    dfsRec(board, word, visited, wordIndex + 1, boardX + 0, boardY - 1)
            )
            {
                return true;
            }
            
            visited[boardX][boardY] = false;
        }
        
        return false;
    }
    
    public:
    bool isWordExist(vector<vector<char>> &board, string word)
    {
        vector<vector<bool>> visited(board.size(), vector<bool> (board[0].size(), false));
        
        for(int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board[0].size(); j++)
            {
                if(word[0] == board[i][j])
                {
                    if(dfsRec(board, word, visited, 0, i, j))
                    {
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
};
