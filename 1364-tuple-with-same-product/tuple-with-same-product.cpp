class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        vector<int> v;

        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                v.push_back(nums[i]*nums[j]);
            }
        }

        sort(v.begin(),v.end());

        int ans=0,c=1;

        for(int i=1;i<v.size();i++){
            if(v[i]==v[i-1]){
                c++;
            }
            else{
                ans+=(c*(c-1)/2)*8;
                c=1;
            }
        }

        ans+=(c*(c-1)/2)*8;

        return ans;
    }
};