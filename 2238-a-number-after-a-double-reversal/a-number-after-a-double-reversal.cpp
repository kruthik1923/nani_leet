class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rev1=0,rev2=0,n=num;
        while(n!=0){
            rev1=rev1*10+n%10;
            n/=10;
        }
        int flag=0;
            while(rev1!=0){
                if(rev1%10==0){
                    rev1/=10;
                }
                else{
                    flag=1;
                    break;
                }
            }
        while(rev1!=0){
            rev2=rev2*10 + rev1%10;
            rev1/=10;
        }

        return (num==rev2);
    }
};