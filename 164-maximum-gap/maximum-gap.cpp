class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if(n < 2) return 0;

        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());

        if(mn == mx) return 0;

        int gap = max(1, (mx - mn) / (n - 1));
        int count = (mx - mn) / gap + 1;

        vector<int> low(count, INT_MAX);
        vector<int> high(count, INT_MIN);

        for(int x : nums) {
            int i = (x - mn) / gap;
            low[i] = min(low[i], x);
            high[i] = max(high[i], x);
        }

        int ans = 0, prev = mn;

        for(int i = 0; i < count; i++) {
            if(low[i] == INT_MAX) continue;

            ans = max(ans, low[i] - prev);
            prev = high[i];
        }

        return ans;
    }
};