class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int p=nums.size(),rev=0,temp=0;
        for(int i=0;i<p;i++){
            rev=0;
            temp=nums[i];
            while(temp!=0){
                rev=rev*10+temp%10;
                temp/=10;
            }
            nums.push_back(rev);
        }

        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        return nums.size();
    }
};