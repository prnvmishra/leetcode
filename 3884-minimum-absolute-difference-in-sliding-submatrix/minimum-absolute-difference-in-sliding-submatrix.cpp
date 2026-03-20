class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> ans(m - k + 1, vector<int>(n - k + 1));

        for(int i = 0; i <= m - k; i++) {
            for(int j = 0; j <= n - k; j++) {

                vector<int> temp;

                // collect k x k submatrix elements
                for(int x = i; x < i + k; x++) {
                    for(int y = j; y < j + k; y++) {
                        temp.push_back(grid[x][y]);
                    }
                }

                // edge case: only 1 element
                if(temp.size() <= 1) {
                    ans[i][j] = 0;
                    continue;
                }

                sort(temp.begin(), temp.end());

                int mini = INT_MAX;

                // find minimum difference between DISTINCT values
                for(int p = 1; p < temp.size(); p++) {
                    if(temp[p] != temp[p-1]) {   // 🔥 ignore duplicates
                        mini = min(mini, temp[p] - temp[p-1]);
                    }
                }

                // if all values same
                if(mini == INT_MAX) mini = 0;

                ans[i][j] = mini;
            }
        }

        return ans;
    }
};