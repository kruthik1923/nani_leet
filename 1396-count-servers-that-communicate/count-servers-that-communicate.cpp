class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int count=0;
        vector<int> rows(grid.size(),0),cols(grid[0].size(),0);
         for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    rows[i]++;
                    cols[j]++;
                }
            }
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    if(rows[i]>1 || cols[j]>1){
                        count++;
                        continue;
                    }
                }
            }
        }
        return count;
    }
};