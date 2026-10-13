class Solution {
public:
long long maxAlternatingSum(vector<int>& nums) {
    int n = nums.size();
    long long ans = 0;
        for (int i = 0; i < n; i++) {
            nums[i] = abs(nums[i]);
        }

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n / 2; i++) {
            ans += 1LL * nums[n - 1 - i] * nums[n - 1 - i]
                - 1LL * nums[i] * nums[i];
        }

        if (n % 2 != 0) {
            ans += 1LL * nums[n / 2] * nums[n / 2];
        }

        return ans;
    }
    };
