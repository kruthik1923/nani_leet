class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count=0;
        int maxy=0;
        for(int i=0;i<sentences.size();i++){
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' '){count++;}
            }
            maxy=max(maxy,count);
            count=0;
        }
        return maxy+1;
    }
};