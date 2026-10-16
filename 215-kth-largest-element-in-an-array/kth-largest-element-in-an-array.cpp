class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size(), l=0, r=n-1;
        while(l<=r){
            int p=nums[r], i=l;
            for(int j=l;j<r;j++){
                if(nums[j]>p){
                    swap(nums[i],nums[j]);
                    i++;
                }
            }
            swap(nums[i],nums[r]);
            if(i==k-1) return nums[i];
            if(i<k-1) l=i+1;
            else r=i-1;
        }
        return -1;
    }
};