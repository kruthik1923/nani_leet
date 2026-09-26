class Solution {
public:
    void sorty(vector<vector<int>>& mat,int r,int c){
        int n=mat.size();
        int m=mat[0].size();
        int len=min(n-r,m-c);
        for(int i=0;i<len-1;i++){
            for(int j=0;j<len-1-i;j++){
                if(mat[r+j][c+j]>mat[r+j+1][c+j+1])
                    swap(mat[r+j][c+j],mat[r+j+1][c+j+1]);
            }
        }
    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        for(int i=0;i<mat.size();i++)
            sorty(mat,i,0);
        for(int i=1;i<mat[0].size();i++)
            sorty(mat,0,i);
        return mat;
    }
};