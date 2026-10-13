class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int time = 0,trash=0;

        for(int i=0;i<garbage.size();i++){
            trash+=garbage[i].length();
        }

        int lm=0,lg=0,lp=0;

        for(int i = 1; i < garbage.size(); i++) {
            for(int j = 0; j < garbage[i].size(); j++){
                if(garbage[i][j]=='G'){
                    lg=i;
                }
                if(garbage[i][j]=='M'){
                    lm=i;
                }
                if(garbage[i][j]=='P'){
                    lp=i;
                }
            }
        }
        for(int i=0;i<lp;i++){
            time+=travel[i];
        }
        for(int i=0;i<lg;i++){
            time+=travel[i];
        }
        for(int i=0;i<lm;i++){
            time+=travel[i];
        }
        return time+trash;       
    }
};