class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string p="";
        for(int i=0;i<indices.size();i++){
            for(int j=0;j<indices.size();j++){
                if(indices[j]==i){
                    p+=s[j];
                }
            }        
        }
        return p;
    }
};