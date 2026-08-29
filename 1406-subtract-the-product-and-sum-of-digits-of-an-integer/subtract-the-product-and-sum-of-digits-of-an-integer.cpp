class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int prod=1;
        int d=0;
        while(n!=0){
            d=n%10;
            sum+=d;
            prod*=d;
            n/=10;
        }
        return prod-sum;
    }
};