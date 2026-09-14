class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int> ans(k,0);
        sort(logs.begin(),logs.end());
        logs.erase(unique(logs.begin(),logs.end()),logs.end());
        
        int count = 0;

        for(int i = 0; i < logs.size(); i++) {
            if(i == 0 || logs[i][0] != logs[i-1][0]) {
                if(i != 0)
                    ans[count - 1]++;
                count = 1;
            }
            else {
                count++;
            }
        }

        if(logs.size() > 0){
            ans[count - 1]++;
        }

    return ans;
    }
};