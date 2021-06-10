class Solution
{
    public:
    bool search(vector<vector<int>> mat, int n, int m, int x) 
    {
        int i = 0, j = m  - 1;
        
        while(i >= 0 and i < n and j >= 0 and j < m)
        {
            if(mat[i][j] == x)
            {
                return 1;
            }
            
            if(mat[i][j] < x)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        
        return 0;
    }
};
