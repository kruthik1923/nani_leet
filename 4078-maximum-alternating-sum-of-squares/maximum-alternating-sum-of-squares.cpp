class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> sum,diff;
        int n=nums.size();
        long long ans=0;
        sort(nums.begin(), nums.end(), [](int a, int b){
            return abs(a) < abs(b); 
        });

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