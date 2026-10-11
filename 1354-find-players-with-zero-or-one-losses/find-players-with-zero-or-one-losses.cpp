class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> v(2);
        vector<int> wins,loses;
        for(int i=0;i<matches.size();i++){
            wins.push_back(matches[i][0]);
            loses.push_back(matches[i][1]);
        }
        sort(wins.begin(),wins.end());
        wins.erase(unique(wins.begin(),wins.end()),wins.end());
        
        sort(loses.begin(),loses.end());
        vector<int> all;
        for(int i=0;i<matches.size();i++){
            all.push_back(matches[i][0]);
            all.push_back(matches[i][1]);
        }
        sort(all.begin(),all.end());
        all.erase(unique(all.begin(),all.end()),all.end());

        for(int i=0;i<wins.size();i++){
            if(!binary_search(loses.begin(),loses.end(),wins[i])){
                v[0].push_back(wins[i]);
            }
        }

        for(int i=0;i<loses.size();){
            int j=i;
            while(j<loses.size() && loses[j]==loses[i]){
                j++;
            }
            if(j-i==1){
                v[1].push_back(loses[i]);
            }
            i=j;
        }
        return v;
    }
};