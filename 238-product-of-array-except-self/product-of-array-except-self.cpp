class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count=1,n=nums.size(),zeroes=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                count*=nums[i];
            }
            else{
                zeroes++;
            }
        }
        vector<int> v;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                if(zeroes-1>0){
                    v.push_back(0);
                }
                else{
                    v.push_back(count);
                }
            }
            else{
                if(zeroes>0){
                    v.push_back(0);
                }
                else{
                    v.push_back(count/nums[i]);
                }
            }
        }
        return v;
    }
};