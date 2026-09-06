class Solution {
public:
    bool check(int n,int k){
        int count=0;
        while(n!=0){
            if(n%2!=0){count++;}
            n/=2;
        }
        if(count==k){
            return true;
        }
        return false;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(check(i,k)){
                ans+=nums[i];
            }
        }
        return ans;
    }
};