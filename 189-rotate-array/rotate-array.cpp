class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 0) return;

        k %= n;
        vector<int> v = nums;
        nums.clear();

        for(int i = 0; i < k; i++) {
            nums.push_back(v[n-k+i]);
        }

        for(int i = 0; i < n-k; i++) {
            nums.push_back(v[i]);
        }
    }
};