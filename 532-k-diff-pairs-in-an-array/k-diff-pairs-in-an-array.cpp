class Solution {
public:
int findPairs(vector<int>& nums, int k) {

    if (k == 0) {
        vector<int> v;
        int ans = 0;

        while (!nums.empty()) {
            int val = nums[0];
            int x = count(nums.begin(), nums.end(), val);

            v.push_back(x);

            nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        }

        for (int i = 0; i < v.size(); i++) {
            if (v[i] > 1) {
                ans++;
            }
        }

        return ans;
    }

    int count = 0;

    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());

    int n = nums.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = abs(nums[i] - nums[j]);

            if (temp == k) {
                count++;
            }
        }
    }

    return count;
}

};
