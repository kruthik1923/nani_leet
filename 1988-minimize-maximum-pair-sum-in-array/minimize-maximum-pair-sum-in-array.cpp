class Solution {
public:
    int minPairSum(vector<int>& nums) {
        vector<int> v;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++){
            v.push_back(nums[i]+nums[n-i-1]);
        }
        return *max_element(v.begin(),v.end());
    }
};