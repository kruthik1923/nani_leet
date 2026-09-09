class Solution {
public:
    int triangularSum(vector<int>& nums) {
        if(nums.size()==1){return nums[0];}
        int p=nums.size();
        vector<int> v(p,0);
        while(v.size()!=1){
            for(int i=0;i+1<p;i++){
                v[i]=(nums[i]+nums[i+1])%10;
            }
            nums=v;
            v.resize(p - 1);
            p=v.size();
        }
        return v[0];
    }
};