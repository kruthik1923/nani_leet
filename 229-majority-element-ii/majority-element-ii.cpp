class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> v;
        int c = nums.size()/3;

        while(!nums.empty()) {
            int x = nums[0];
            int p = count(nums.begin(), nums.end(), x);

            if(p > c) {
                v.push_back(x);
            }

            nums.erase(remove(nums.begin(), nums.end(), x), nums.end());
        }

        return v;
    }
};