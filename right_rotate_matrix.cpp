class Solution {
public:
   void transpose(vector<vector<int>> &matrix) {
       
        //print(matrix);
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = i; j < matrix.size(); j++) {
                int tmp = matrix[j][i];
                matrix[j][i] = matrix[i][j];
                matrix[i][j] = tmp;
            }
        }
         //print(matrix);
    }
    
    void Reverse(vector<vector<int>> &matrix)
    {
        for(int i = 0 ;i < matrix.size() ; ++i)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        Reverse(matrix);
    }
};
