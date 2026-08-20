class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int div=0;
        int n=num;
        while(n>0){
            div=n%10;
            if(num%div==0){count++;}
            n=n/10;
        }
        return count;
    }
};