class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0,rem=0,a=x;
        while(a!=0){
            rem=a%10;
            sum+=rem;
            a=a/10;
        }
        if(x%sum==0){
            return sum;
        }
        return -1;
    }
};