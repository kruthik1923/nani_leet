class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n=0;
        for(int x : nums){
            while(x>0){
                if(x%10==digit){
                    n++;
                }
                x/=10;
            }
        }
        return n;
    }
};