class Solution {
public:
    int minElement(vector<int>& nums) {
        int p=0;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int sum=0;
            int rem=0;
            while(n>0){
                rem=n%10;
                sum+=rem;
                n=n/10;
            }
            if(i==0){p=sum;}
            else{
            p=min(p,sum);}
        }
    return p;
    }
};