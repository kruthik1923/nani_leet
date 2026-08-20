class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                for(int j=i;j+1<nums.size();j++){
                    nums[j]=nums[j+1];
                }
                nums[n-1]=0;
                n--;
                i--;

            }
        }
    }
};