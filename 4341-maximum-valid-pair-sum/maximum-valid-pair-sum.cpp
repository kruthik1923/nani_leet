class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int maxy = 0;
        int maxi = nums[0];

        for(int j = k; j < nums.size(); j++) {
            maxi = max(maxi, nums[j-k]);
            maxy = max(maxy, maxi + nums[j]);
        }

        return maxy;
    }
};