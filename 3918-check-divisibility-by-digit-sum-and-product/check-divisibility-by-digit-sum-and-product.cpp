class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,prod=1,p=n;
        while(n!=0){
            sum+=n%10;
            prod*=n%10;
            n/=10;
        }
        return (p%(sum+prod)==0);
    }
};