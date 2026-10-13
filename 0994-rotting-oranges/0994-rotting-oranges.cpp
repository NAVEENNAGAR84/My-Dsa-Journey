class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int fresh = 0;
        int time = 0;
        queue<pair<int, int>> q;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                } else if (grid[i][j] == 1)
                    fresh++;
            }
        }

        int dr[] = {1, -1, 0, 0};
        int dc[] = {0, 0, 1, -1};
        while (!q.empty() && fresh > 0) {
            time++;
            int size = q.size();
            for (int k = 0; k < size; k++) {
                auto x = q.front();
                q.pop();
                for (int d = 0; d < 4; d++) {
                    int nr = x.first + dr[d];
                    int nc = x.second + dc[d];
                    if (nr >= 0 && nc >= 0 && nr < row && nc < col &&
                        grid[nr][nc] == 1) {
                        grid[nr][nc] = 2;
                        fresh--;
                        q.push({nr, nc});
                    }
                }
            }
        }
        if (fresh > 0)
            return -1;
        return time;
    }
};