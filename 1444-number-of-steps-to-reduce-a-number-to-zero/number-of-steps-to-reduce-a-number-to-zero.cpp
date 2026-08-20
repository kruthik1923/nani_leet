class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
        int a=num;
        while(a!=0){
            if(a%2==0){
            a=a/2;
            count++;}
            else{
            a=a-1;
            count++;
            }
        }
        return count;
    }
};