class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int psum=0,a=0,flag=0;
        for(int i=0;i<nums.size();i++){
            if(nums.size()==1 || i==0){
                psum=nums[0];
            }
            else if(nums[i]==nums[i-1]+1){
                psum+=nums[i];
                a=i;
            }
            else{
                break;
            }
        }
        sort(nums.begin()+a,nums.end());
        while(true){
            flag=0;
            for(int i=a;i<nums.size();i++){
                if(psum==nums[i]){
                    psum++;
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                return psum;
            }
        }
    return 0;
    }
};