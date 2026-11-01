class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> v;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                v.push_back(matrix[i][j]);
            }
        }
        int c=0;
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                if(v[i]>v[j]){
                    swap(v[i],v[j]);
                }
            }
            c++;
            if(k==c){
                return v[c-1];
            }
        }
        return 0;
    }
};