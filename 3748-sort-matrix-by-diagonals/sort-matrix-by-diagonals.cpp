class Solution {
public:
    void sorty(vector<vector<int>>& grid,int x,int y,bool inc){
        int n=grid.size();
        int len=min(n-x,n-y);
        for(int i=0;i<len-1;i++){
            for(int j=0;j<len-1-i;j++){
                if(inc){
                    if(grid[x+j][y+j]>grid[x+j+1][y+j+1])
                        swap(grid[x+j][y+j],grid[x+j+1][y+j+1]);
                }
                else{
                    if(grid[x+j][y+j]<grid[x+j+1][y+j+1])
                        swap(grid[x+j][y+j],grid[x+j+1][y+j+1]);
                }
            }
        }
    }
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid){
        int n=grid.size();
        for(int i=0;i<n;i++)
            sorty(grid,i,0,false);
        for(int j=1;j<n;j++)
            sorty(grid,0,j,true);
        return grid;
    }
};