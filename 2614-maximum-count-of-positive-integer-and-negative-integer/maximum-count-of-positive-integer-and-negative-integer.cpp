class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=0,c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                n++;
                continue;
            }
            if(nums[i]==0){
                c++;
                continue;
            }
            else{
                break;
            }
        }
        return max(n,(int)nums.size()-n-c);
    }
};