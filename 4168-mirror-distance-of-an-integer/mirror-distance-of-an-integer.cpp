class Solution {
public:
    int mirrorDistance(int n) {
        int rev=0;
        int rem=0;
        int p=n;
        while(n!=0){
            rem=n%10;
            rev=rev*10 + rem;
            n=n/10;
        }
        return abs(p-rev);
    }
};