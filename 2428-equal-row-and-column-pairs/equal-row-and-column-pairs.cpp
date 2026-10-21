class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans=0,n=grid.size();
        vector<vector<int>> col(n);

        for(int i=0;i<n;i++){
            for(int k=0;k<n;k++){
                col[i].push_back(grid[k][i]);
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int flag=1;
                for(int p=0;p<n;p++){
                    if(grid[i][p]!=col[j][p]){
                        flag=0;
                        break;
                    }
                }
                if(flag==1){
                    ans++;
                }
            }
        }
        return ans;
    }
};