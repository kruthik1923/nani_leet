class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> v(nums.size()/3);
        sort(nums.begin(), nums.end());

        int j = 0;

        for(int i = 0; i < nums.size(); i += 3) {
            if(nums[i+2] - nums[i] > k)
                return {};

            for(int x = i; x < i + 3; x++) {
                v[j].push_back(nums[x]);
            }

            j++;
        }

        return v;
    }
};