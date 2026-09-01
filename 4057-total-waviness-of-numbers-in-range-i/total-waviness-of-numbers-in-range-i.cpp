class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int waviness=0;
        while(num1<=num2){
        if(num1/100==0){
            num1++;
            continue;
        }
        int otemp=num1;
        bool turn=false;
        int k=1;
        while(otemp>0){
            int temp=otemp/k;
        if(temp>0){
            int next=temp%10;
            temp/=10;
            if(temp==0)break;
            int mid=temp%10;
            temp/=10;
            if(temp==0)break;
            int prev=temp%10;
            temp/=10;
            if(mid>prev && mid>next|| mid<prev && mid<next)waviness++;
        }
        k*=10;
        }
        num1++;
        }
        return waviness;
    }
};
