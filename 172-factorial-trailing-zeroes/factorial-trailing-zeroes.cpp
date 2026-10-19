class Solution {
public:
    int trailingZeroes(int n) {
        int ans=n/5;
        if(n>=25){
            ans+=n/25;
        }
        if(n>=125){
            ans+=n/125;
        }
        if(n>=625){
            ans+=n/625;
        }
        if(n>=3125){
            ans+=n/3125;
        }
        return ans;
    }
};