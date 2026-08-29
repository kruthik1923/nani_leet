class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> v;
        for(int i=0;i+1<nums.size();i++){
            while(nums[i]+1<nums[i+1]){
                v.push_back(nums[i]+1);
                nums[i]++;
            }
        }
        return v;
    }
};