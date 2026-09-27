class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v(nums.size()+1,0);
        for(int i=0;i<nums.size();i++){
            v[nums[i]]++;
        }
        nums.clear();
        for(int i=0;i<v.size();i++){
            while(v[i]>1){
                nums.push_back(i);
                v[i]--;
            }
        }
        return nums;
    }
};