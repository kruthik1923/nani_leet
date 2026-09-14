class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int m=0,p=0;
        for(int i=0;i<players.size();i++){
            for(int j=p;j<trainers.size();j++){
                if(players[i]<=trainers[j]){
                    m++;
                    p=j+1;
                    break;
                }
            }
        }
        return m;
    }
};