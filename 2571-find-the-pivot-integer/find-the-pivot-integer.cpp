class Solution {
public:
        bool check(int x,int n){
            int ls=0,rs=0;
            for(int i=1;i<=x;i++){
                ls+=i;
            }
            for(int i=x;i<=n;i++){
                rs+=i;
            }
            if(ls==rs){
                return 1;
            }
            return 0;
        }
    int pivotInteger(int n) {

        int ans=0;
        bool p=0;
        for(int i=1;i<=n;i++){
            p=check(i,n);
            if(p==1){
                return i;
            }
        }
        return -1;
    }
};