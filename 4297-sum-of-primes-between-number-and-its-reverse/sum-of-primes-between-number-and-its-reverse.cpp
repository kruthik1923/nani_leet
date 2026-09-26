class Solution {
public:
    int check(int n){
        if(n<2){return 0;}
        int og=n;
        for(int i=2;i<=og/2;i++){
            if(n%i==0){
                return 0;
            }
        }
        return og;
    }
    int sumOfPrimesInRange(int n) {
        int r=0,temp=n,sum=0;
        while(temp!=0){
            r=r*10 + temp%10;
            temp/=10;
        }
        if(n<=r){
            for(int i=n;i<=r;i++){
                sum+=check(i);
            }
        }
        else{
            for(int i=r;i<=n;i++){
                sum+=check(i);
            }
        }
        return sum;
    }
};