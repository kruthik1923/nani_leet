class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> v;
        int min1=0,min2=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=2){

            min1=nums[i];
            min2=nums[i+1];
     
            v.push_back(min2);
            v.push_back(min1);
        }
        return v;
    }
};