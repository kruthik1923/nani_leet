class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n=nums.size();
        vector<int> first(n+1,-1),second(n+1,-1);
        int ans=INT_MAX;

        for(int i=0;i<n;i++){
            int x=nums[i];

            if(first[x]!=-1)
                ans=min(ans,2*(i-first[x]));

            first[x]=second[x];
            second[x]=i;
        }

        return ans==INT_MAX?-1:ans;
    }
};