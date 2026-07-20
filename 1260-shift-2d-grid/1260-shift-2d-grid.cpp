class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int temp = 1;
        int n = grid[0].size();
        int m = grid.size();
        int total = n*m;
        vector<vector<int>>ans(m,vector<int>(n,0));
        for(int i = 0; i < grid.size(); i ++){
            for(int j = 0; j < grid[i].size(); j ++){
                int cur = i*n + j;
                cur = cur+ k;
                cur = cur% total;
                int newI = cur/n;
                int newJ = cur%n;
                ans[newI][newJ] = grid[i][j];
            }
        }
        return ans;
    }
};