class Solution 
{
    public:
    int shortestDistance(int N, int M, vector<vector<int>> matrix, int X, int Y)
    {
        if(matrix[0][0] == 0 or matrix[X][Y] == 0)
        {
            return -1;
        }
        
        vector<vector<int>> dist(N, vector<int>(M, INT_MAX));
        vector<pair<int, int>> moves = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        pq.push({0, 0});
        dist[0][0] = 0;
        
        while(!pq.empty())
        {
            int currX = pq.top().first;
            int currY = pq.top().second;
            
            pq.pop();
        
            for(auto move: moves)
            {
                int x = currX + move.first;
                int y = currY + move.second;
                
                if(
                        x >= 0 and x < N and y >= 0 and y < M and
                        matrix[x][y] == 1 and
                        dist[x][y] > dist[currX][currY] + 1
                )
                {
                    dist[x][y] = dist[currX][currY] + 1;
                    
                    pq.push({x, y});
                }
            }
        }
        
        return dist[X][Y] != INT_MAX ? dist[X][Y] : -1;
    }
};
