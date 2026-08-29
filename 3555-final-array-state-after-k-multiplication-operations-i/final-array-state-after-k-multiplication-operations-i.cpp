class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int counter=0;
        int index=0;
        while(counter!=k){
            index = min_element(nums.begin(), nums.end()) - nums.begin();
            nums[index]=nums[index]*multiplier;
            counter++;
        }
        return nums;
    }
};