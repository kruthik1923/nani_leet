class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> v;
        int i=0;
        while(i!=nums.size()){
            v.push_back(nums[nums[i]]);
            i+=1;
        }
        return v;
    }
};