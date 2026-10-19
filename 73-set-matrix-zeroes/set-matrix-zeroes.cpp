class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<int> a,b;

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    a.push_back(i);
                    b.push_back(j);
                }
            }
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        a.erase(unique(a.begin(),a.end()),a.end());
        b.erase(unique(b.begin(),b.end()),b.end());
        for(int x=0;x<a.size();x++){
            int p=0;
            int z=a[x];
            while(p<c){
                matrix[z][p]=0;
                p++;
            }
        }
        for(int x=0;x<b.size();x++){
            int p=0;
            int z=b[x];
            while(p<r){
                matrix[p][z]=0;
                p++;
            }
        }
    }
};