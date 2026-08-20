class Solution {
public:
    int thirdMax(vector<int>& nums) {
       long long a = LLONG_MIN, b = LLONG_MIN, c = LLONG_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>a){
                c=b;
                b=a;
                a=nums[i];
            }
            else if(nums[i]>b && nums[i]!=a){
                c=b;
                b=nums[i];
            }
            else if(nums[i]>c&& (nums[i]!=b && nums[i]!=a)){
                c=nums[i];
            }
        }
        

        return (c == LLONG_MIN) ? a : c;
    }
};