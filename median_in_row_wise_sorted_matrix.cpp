class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here
        vector<int> a;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                a.push_back(matrix[i][j]);
            }
        }
        sort(a.begin(),a.end());
        int n=a.size();
        return a[n/2];
    }
};
