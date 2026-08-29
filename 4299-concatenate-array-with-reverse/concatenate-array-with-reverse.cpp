class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int p=nums.size();
        for(int i=nums.size()-1;i>=0;i--){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};