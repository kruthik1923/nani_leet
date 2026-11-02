class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left,right;
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==pivot){
                c++;
            }
            if(pivot>nums[i]){
                left.push_back(nums[i]);
            }
            if(pivot<nums[i]){
                right.push_back(nums[i]);
            }
        }
        nums.clear();
        for(int i=0;i<left.size();i++){
            nums.push_back(left[i]);
        }
        while(c){
            nums.push_back(pivot);
            c--;
        }
        for(int i=0;i<right.size();i++){
            nums.push_back(right[i]);
        }
        return nums;
    }
};