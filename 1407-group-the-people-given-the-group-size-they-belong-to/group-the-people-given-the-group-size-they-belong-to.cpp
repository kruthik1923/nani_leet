class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n = groupSizes.size();

        vector<vector<int>> temp(n + 1);
        vector<vector<int>> ans;

        for (int i = 0; i < n; i++) {
            int sz = groupSizes[i];

            temp[sz].push_back(i);

            if (temp[sz].size() == sz) {
                ans.push_back(temp[sz]);
                temp[sz].clear();
            }
        }

        return ans;
    }
};