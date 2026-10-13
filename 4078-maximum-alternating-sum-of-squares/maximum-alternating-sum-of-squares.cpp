class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> sum,diff;
        int n=nums.size();
        long long ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                nums[i]=nums[i]*(-1);
            }
        }
        sort(nums.begin(), nums.end());
        for(int i=0;i<n/2;i++){
            diff.push_back(1LL*nums[i]*nums[i]);
        }
        for(int i=n/2;i<n;i++){
            sum.push_back(1LL*nums[i]*nums[i]);
        }
        for(int i=0;i<n/2;i++){
            ans+=sum[i]-diff[i];
        }
        if (n%2!=0){
            ans += sum.back();
        }
        return ans;
    }
};