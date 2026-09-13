class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> temp = matrix;

        for(int i = 0; i < n; i++) {
            matrix[i].clear();

            for(int j = n - 1; j >= 0; j--) {
                matrix[i].push_back(temp[j][i]);
            }
        }
    }
};