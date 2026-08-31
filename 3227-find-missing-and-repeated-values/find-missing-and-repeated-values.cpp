class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size(),s=0;
        vector<int> v(n*n+1,0);
        vector<int> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v[grid[i][j]]++;
            }
        }
        for(int i=1;i<=n*n;i++){
            if(v[i]==2){
                q.push_back(i);
            }
            if(v[i]==0){
                s=i;
            }
        }
        q.push_back(s);
        return q;
    }
};