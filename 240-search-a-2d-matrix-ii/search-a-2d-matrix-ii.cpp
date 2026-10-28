class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool ans=false;
        int row_last=matrix[0].size()-1;
        bool flag=0;
        for(int i=0;i<matrix.size();i++){
            if(target<=matrix[i][row_last]){
                flag=binary_search(matrix[i].begin(), matrix[i].end(), target);
            }
            if(flag==1){
                return 1;
            }
        }
        return ans;
    }
};