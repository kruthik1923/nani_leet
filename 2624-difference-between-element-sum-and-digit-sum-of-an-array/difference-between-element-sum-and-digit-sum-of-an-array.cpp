class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++){
            x+=nums[i];
        }
        int y=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]){
                y+=nums[i]%10;
                nums[i]=nums[i]/10;
            }
            
        }
        return abs(x-y);
    }
};