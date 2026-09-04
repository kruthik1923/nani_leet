class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> v(A.size()+1,0),q;
        int com=0;

        for(int i=0;i<A.size();i++){
            v[A[i]]++;
            if(v[A[i]]==2){
                com++;
            }
            v[B[i]]++;
            if(v[B[i]]==2){
                com++;
            }
            q.push_back(com);
        }
        return q;
    }
};